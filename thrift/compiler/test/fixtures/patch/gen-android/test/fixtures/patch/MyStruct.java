/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
package test.fixtures.patch;

import java.util.List;
import java.util.ArrayList;
import java.util.Map;
import java.util.HashMap;
import java.util.Set;
import java.util.HashSet;
import java.util.Collections;
import java.util.BitSet;
import java.util.Arrays;
import com.facebook.thrift.*;
import com.facebook.thrift.annotations.*;
import com.facebook.thrift.async.*;
import com.facebook.thrift.meta_data.*;
import com.facebook.thrift.server.*;
import com.facebook.thrift.transport.*;
import com.facebook.thrift.protocol.*;

@SuppressWarnings({ "unused", "serial" })
public class MyStruct implements TBase, java.io.Serializable, Cloneable {
  private static final TStruct STRUCT_DESC = new TStruct("MyStruct");
  private static final TField BOOL_VAL_FIELD_DESC = new TField("boolVal", TType.BOOL, (short)1);
  private static final TField BYTE_VAL_FIELD_DESC = new TField("byteVal", TType.BYTE, (short)2);
  private static final TField I16_VAL_FIELD_DESC = new TField("i16Val", TType.I16, (short)3);
  private static final TField I32_VAL_FIELD_DESC = new TField("i32Val", TType.I32, (short)4);
  private static final TField I64_VAL_FIELD_DESC = new TField("i64Val", TType.I64, (short)5);
  private static final TField FLOAT_VAL_FIELD_DESC = new TField("floatVal", TType.FLOAT, (short)6);
  private static final TField DOUBLE_VAL_FIELD_DESC = new TField("doubleVal", TType.DOUBLE, (short)7);
  private static final TField STRING_VAL_FIELD_DESC = new TField("stringVal", TType.STRING, (short)8);
  private static final TField BINARY_VAL_FIELD_DESC = new TField("binaryVal", TType.STRING, (short)9);

  public final Boolean boolVal;
  public final Byte byteVal;
  public final Short i16Val;
  public final Integer i32Val;
  public final Long i64Val;
  public final Float floatVal;
  public final Double doubleVal;
  public final String stringVal;
  public final byte[] binaryVal;
  public static final int BOOLVAL = 1;
  public static final int BYTEVAL = 2;
  public static final int I16VAL = 3;
  public static final int I32VAL = 4;
  public static final int I64VAL = 5;
  public static final int FLOATVAL = 6;
  public static final int DOUBLEVAL = 7;
  public static final int STRINGVAL = 8;
  public static final int BINARYVAL = 9;

  public MyStruct(
      Boolean boolVal,
      Byte byteVal,
      Short i16Val,
      Integer i32Val,
      Long i64Val,
      Float floatVal,
      Double doubleVal,
      String stringVal,
      byte[] binaryVal) {
    this.boolVal = boolVal;
    this.byteVal = byteVal;
    this.i16Val = i16Val;
    this.i32Val = i32Val;
    this.i64Val = i64Val;
    this.floatVal = floatVal;
    this.doubleVal = doubleVal;
    this.stringVal = stringVal;
    this.binaryVal = binaryVal;
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public MyStruct(MyStruct other) {
    if (other.isSetBoolVal()) {
      this.boolVal = TBaseHelper.deepCopy(other.boolVal);
    } else {
      this.boolVal = null;
    }
    if (other.isSetByteVal()) {
      this.byteVal = TBaseHelper.deepCopy(other.byteVal);
    } else {
      this.byteVal = null;
    }
    if (other.isSetI16Val()) {
      this.i16Val = TBaseHelper.deepCopy(other.i16Val);
    } else {
      this.i16Val = null;
    }
    if (other.isSetI32Val()) {
      this.i32Val = TBaseHelper.deepCopy(other.i32Val);
    } else {
      this.i32Val = null;
    }
    if (other.isSetI64Val()) {
      this.i64Val = TBaseHelper.deepCopy(other.i64Val);
    } else {
      this.i64Val = null;
    }
    if (other.isSetFloatVal()) {
      this.floatVal = TBaseHelper.deepCopy(other.floatVal);
    } else {
      this.floatVal = null;
    }
    if (other.isSetDoubleVal()) {
      this.doubleVal = TBaseHelper.deepCopy(other.doubleVal);
    } else {
      this.doubleVal = null;
    }
    if (other.isSetStringVal()) {
      this.stringVal = TBaseHelper.deepCopy(other.stringVal);
    } else {
      this.stringVal = null;
    }
    if (other.isSetBinaryVal()) {
      this.binaryVal = TBaseHelper.deepCopy(other.binaryVal);
    } else {
      this.binaryVal = null;
    }
  }

  public MyStruct deepCopy() {
    return new MyStruct(this);
  }

  public Boolean isBoolVal() {
    return this.boolVal;
  }

  // Returns true if field boolVal is set (has been assigned a value) and false otherwise
  public boolean isSetBoolVal() {
    return this.boolVal != null;
  }

  public Byte getByteVal() {
    return this.byteVal;
  }

  // Returns true if field byteVal is set (has been assigned a value) and false otherwise
  public boolean isSetByteVal() {
    return this.byteVal != null;
  }

  public Short getI16Val() {
    return this.i16Val;
  }

  // Returns true if field i16Val is set (has been assigned a value) and false otherwise
  public boolean isSetI16Val() {
    return this.i16Val != null;
  }

  public Integer getI32Val() {
    return this.i32Val;
  }

  // Returns true if field i32Val is set (has been assigned a value) and false otherwise
  public boolean isSetI32Val() {
    return this.i32Val != null;
  }

  public Long getI64Val() {
    return this.i64Val;
  }

  // Returns true if field i64Val is set (has been assigned a value) and false otherwise
  public boolean isSetI64Val() {
    return this.i64Val != null;
  }

  public Float getFloatVal() {
    return this.floatVal;
  }

  // Returns true if field floatVal is set (has been assigned a value) and false otherwise
  public boolean isSetFloatVal() {
    return this.floatVal != null;
  }

  public Double getDoubleVal() {
    return this.doubleVal;
  }

  // Returns true if field doubleVal is set (has been assigned a value) and false otherwise
  public boolean isSetDoubleVal() {
    return this.doubleVal != null;
  }

  public String getStringVal() {
    return this.stringVal;
  }

  // Returns true if field stringVal is set (has been assigned a value) and false otherwise
  public boolean isSetStringVal() {
    return this.stringVal != null;
  }

  public byte[] getBinaryVal() {
    return this.binaryVal;
  }

  // Returns true if field binaryVal is set (has been assigned a value) and false otherwise
  public boolean isSetBinaryVal() {
    return this.binaryVal != null;
  }

  @Override
  public boolean equals(Object _that) {
    if (_that == null)
      return false;
    if (this == _that)
      return true;
    if (!(_that instanceof MyStruct))
      return false;
    MyStruct that = (MyStruct)_that;

    if (!TBaseHelper.equalsNobinary(this.isSetBoolVal(), that.isSetBoolVal(), this.boolVal, that.boolVal)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetByteVal(), that.isSetByteVal(), this.byteVal, that.byteVal)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetI16Val(), that.isSetI16Val(), this.i16Val, that.i16Val)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetI32Val(), that.isSetI32Val(), this.i32Val, that.i32Val)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetI64Val(), that.isSetI64Val(), this.i64Val, that.i64Val)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetFloatVal(), that.isSetFloatVal(), this.floatVal, that.floatVal)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetDoubleVal(), that.isSetDoubleVal(), this.doubleVal, that.doubleVal)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetStringVal(), that.isSetStringVal(), this.stringVal, that.stringVal)) { return false; }

    if (!TBaseHelper.equalsSlow(this.isSetBinaryVal(), that.isSetBinaryVal(), this.binaryVal, that.binaryVal)) { return false; }

    return true;
  }

  @Override
  public int hashCode() {
    return Arrays.deepHashCode(new Object[] {boolVal, byteVal, i16Val, i32Val, i64Val, floatVal, doubleVal, stringVal, binaryVal});
  }

  // This is required to satisfy the TBase interface, but can't be implemented on immutable struture.
  public void read(TProtocol iprot) throws TException {
    throw new TException("unimplemented in android immutable structure");
  }

  public static MyStruct deserialize(TProtocol iprot) throws TException {
    Boolean tmp_boolVal = null;
    Byte tmp_byteVal = null;
    Short tmp_i16Val = null;
    Integer tmp_i32Val = null;
    Long tmp_i64Val = null;
    Float tmp_floatVal = null;
    Double tmp_doubleVal = null;
    String tmp_stringVal = null;
    byte[] tmp_binaryVal = null;
    TField __field;
    iprot.readStructBegin();
    while (true)
    {
      __field = iprot.readFieldBegin();
      if (__field.type == TType.STOP) {
        break;
      }
      switch (__field.id)
      {
        case BOOLVAL:
          if (__field.type == TType.BOOL) {
            tmp_boolVal = iprot.readBool();
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case BYTEVAL:
          if (__field.type == TType.BYTE) {
            tmp_byteVal = iprot.readByte();
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case I16VAL:
          if (__field.type == TType.I16) {
            tmp_i16Val = iprot.readI16();
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case I32VAL:
          if (__field.type == TType.I32) {
            tmp_i32Val = iprot.readI32();
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case I64VAL:
          if (__field.type == TType.I64) {
            tmp_i64Val = iprot.readI64();
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case FLOATVAL:
          if (__field.type == TType.FLOAT) {
            tmp_floatVal = iprot.readFloat();
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case DOUBLEVAL:
          if (__field.type == TType.DOUBLE) {
            tmp_doubleVal = iprot.readDouble();
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case STRINGVAL:
          if (__field.type == TType.STRING) {
            tmp_stringVal = iprot.readString();
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case BINARYVAL:
          if (__field.type == TType.STRING) {
            tmp_binaryVal = iprot.readBinary();
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        default:
          TProtocolUtil.skip(iprot, __field.type);
          break;
      }
      iprot.readFieldEnd();
    }
    iprot.readStructEnd();

    MyStruct _that;
    _that = new MyStruct(
      tmp_boolVal
      ,tmp_byteVal
      ,tmp_i16Val
      ,tmp_i32Val
      ,tmp_i64Val
      ,tmp_floatVal
      ,tmp_doubleVal
      ,tmp_stringVal
      ,tmp_binaryVal
    );
    _that.validate();
    return _that;
  }

  public void write(TProtocol oprot) throws TException {
    validate();

    oprot.writeStructBegin(STRUCT_DESC);
    if (this.boolVal != null) {
      oprot.writeFieldBegin(BOOL_VAL_FIELD_DESC);
      oprot.writeBool(this.boolVal);
      oprot.writeFieldEnd();
    }
    if (this.byteVal != null) {
      oprot.writeFieldBegin(BYTE_VAL_FIELD_DESC);
      oprot.writeByte(this.byteVal);
      oprot.writeFieldEnd();
    }
    if (this.i16Val != null) {
      oprot.writeFieldBegin(I16_VAL_FIELD_DESC);
      oprot.writeI16(this.i16Val);
      oprot.writeFieldEnd();
    }
    if (this.i32Val != null) {
      oprot.writeFieldBegin(I32_VAL_FIELD_DESC);
      oprot.writeI32(this.i32Val);
      oprot.writeFieldEnd();
    }
    if (this.i64Val != null) {
      oprot.writeFieldBegin(I64_VAL_FIELD_DESC);
      oprot.writeI64(this.i64Val);
      oprot.writeFieldEnd();
    }
    if (this.floatVal != null) {
      oprot.writeFieldBegin(FLOAT_VAL_FIELD_DESC);
      oprot.writeFloat(this.floatVal);
      oprot.writeFieldEnd();
    }
    if (this.doubleVal != null) {
      oprot.writeFieldBegin(DOUBLE_VAL_FIELD_DESC);
      oprot.writeDouble(this.doubleVal);
      oprot.writeFieldEnd();
    }
    if (this.stringVal != null) {
      oprot.writeFieldBegin(STRING_VAL_FIELD_DESC);
      oprot.writeString(this.stringVal);
      oprot.writeFieldEnd();
    }
    if (this.binaryVal != null) {
      oprot.writeFieldBegin(BINARY_VAL_FIELD_DESC);
      oprot.writeBinary(this.binaryVal);
      oprot.writeFieldEnd();
    }
    oprot.writeFieldStop();
    oprot.writeStructEnd();
  }

  @Override
  public String toString() {
    return toString(1, true);
  }

  @Override
  public String toString(int indent, boolean prettyPrint) {
    return TBaseHelper.toStringHelper(this, indent, prettyPrint);
  }

  public void validate() throws TException {
    // check for required fields
  }

}
