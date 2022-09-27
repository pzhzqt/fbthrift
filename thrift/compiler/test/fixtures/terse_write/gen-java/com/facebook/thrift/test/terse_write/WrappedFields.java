/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package com.facebook.thrift.test.terse_write;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.codec.ThriftField.Recursiveness;
import com.google.common.collect.*;
import java.util.*;
import javax.annotation.Nullable;
import org.apache.thrift.*;
import org.apache.thrift.transport.*;
import org.apache.thrift.protocol.*;
import static com.google.common.base.MoreObjects.toStringHelper;
import static com.google.common.base.MoreObjects.ToStringHelper;

@SwiftGenerated
@com.facebook.swift.codec.ThriftStruct(value="WrappedFields", builder=WrappedFields.Builder.class)
public final class WrappedFields implements com.facebook.thrift.payload.ThriftSerializable {

    @ThriftConstructor
    public WrappedFields(
        @com.facebook.swift.codec.ThriftField(value=1, name="field1", requiredness=Requiredness.TERSE) final int field1
    ) {
        this.field1 = field1;
    }
    
    @ThriftConstructor
    protected WrappedFields() {
      this.field1 = 7;
    }
    
    public static class Builder {
    
        private int field1 = 7;
    
        @com.facebook.swift.codec.ThriftField(value=1, name="field1", requiredness=Requiredness.TERSE)
        public Builder setField1(int field1) {
            this.field1 = field1;
            return this;
        }
    
        public int getField1() { return field1; }
    
        public Builder() { }
        public Builder(WrappedFields other) {
            this.field1 = other.field1;
        }
    
        @ThriftConstructor
        public WrappedFields build() {
            WrappedFields result = new WrappedFields (
                this.field1
            );
            return result;
        }
    }
        public static final Map<String, Integer> NAMES_TO_IDS = new HashMap();
    public static final Map<String, Integer> THRIFT_NAMES_TO_IDS = new HashMap();
    public static final Map<Integer, TField> FIELD_METADATA = new HashMap<>();
    private static final TStruct STRUCT_DESC = new TStruct("WrappedFields");
    private final int field1;
    public static final int _FIELD1 = 1;
    private static final TField FIELD1_FIELD_DESC = new TField("field1", TType.I32, (short)1);
    static {
      NAMES_TO_IDS.put("field1", 1);
      THRIFT_NAMES_TO_IDS.put("field1", 1);
      FIELD_METADATA.put(1, FIELD1_FIELD_DESC);
      com.facebook.thrift.type.TypeRegistry.add(new com.facebook.thrift.type.Type(
        new com.facebook.thrift.type.UniversalName("facebook.com/thrift/test/terse_write/WrappedFields"), 
        WrappedFields.class, WrappedFields::read0));
    }
    
    
    @com.facebook.swift.codec.ThriftField(value=1, name="field1", requiredness=Requiredness.TERSE)
    public int getField1() { return field1; }
    
    @java.lang.Override
    public String toString() {
        ToStringHelper helper = toStringHelper(this);
        helper.add("field1", field1);
        return helper.toString();
    }
    
    @java.lang.Override
    public boolean equals(java.lang.Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
    
        WrappedFields other = (WrappedFields)o;
    
        return
            Objects.equals(field1, other.field1) &&
            true;
    }
    
    @java.lang.Override
    public int hashCode() {
        return Arrays.deepHashCode(new java.lang.Object[] {
            field1
        });
    }
    
    
    public static com.facebook.thrift.payload.Reader<WrappedFields> asReader() {
      return WrappedFields::read0;
    }
    
    public static WrappedFields read0(TProtocol oprot) throws TException {
      TField __field;
      oprot.readStructBegin(WrappedFields.NAMES_TO_IDS, WrappedFields.THRIFT_NAMES_TO_IDS, WrappedFields.FIELD_METADATA);
      WrappedFields.Builder builder = new WrappedFields.Builder();
      builder.setField1(0);
      while (true) {
        __field = oprot.readFieldBegin();
        if (__field.type == TType.STOP) { break; }
        switch (__field.id) {
        case _FIELD1:
          if (__field.type == TType.I32) {
            int field1 = oprot.readI32();
            builder.setField1(field1);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        default:
          TProtocolUtil.skip(oprot, __field.type);
          break;
        }
        oprot.readFieldEnd();
      }
      oprot.readStructEnd();
      return builder.build();
    }
    
    public void write0(TProtocol oprot) throws TException {
      oprot.writeStructBegin(STRUCT_DESC);
      int structStart = 0;
      int pos = 0;
      com.facebook.thrift.protocol.ByteBufTProtocol p = (com.facebook.thrift.protocol.ByteBufTProtocol) oprot;
      if (!com.facebook.thrift.util.IntrinsicDefaults.isDefault(field1)) {
        oprot.writeFieldBegin(FIELD1_FIELD_DESC);
        oprot.writeI32(this.field1);
        oprot.writeFieldEnd();
      };
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }
    
    private static class _WrappedFieldsLazy {
        private static final WrappedFields _DEFAULT = new WrappedFields.Builder().build();
    }
    
    public static WrappedFields defaultInstance() {
        return  _WrappedFieldsLazy._DEFAULT;
    }
}