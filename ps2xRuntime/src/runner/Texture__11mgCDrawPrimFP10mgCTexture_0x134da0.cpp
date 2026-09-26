#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Texture__11mgCDrawPrimFP10mgCTexture
// Address: 0x134da0 - 0x134ebc
void Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Texture__11mgCDrawPrimFP10mgCTexture_0x134da0");
#endif

    switch (ctx->pc) {
        case 0x134de0u: goto label_134de0;
        case 0x134e74u: goto label_134e74;
        default: break;
    }

    ctx->pc = 0x134da0u;

    // 0x134da0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x134da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x134da4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x134da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x134da8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x134da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x134dac: 0x10a0003f  beqz        $a1, . + 4 + (0x3F << 2)
    ctx->pc = 0x134DACu;
    {
        const bool branch_taken_0x134dac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x134DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134DACu;
            // 0x134db0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134dac) {
            ctx->pc = 0x134EACu;
            goto label_134eac;
        }
    }
    ctx->pc = 0x134DB4u;
    // 0x134db4: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x134db4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x134db8: 0x24a70008  addiu       $a3, $a1, 0x8
    ctx->pc = 0x134db8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x134dbc: 0x26060060  addiu       $a2, $s0, 0x60
    ctx->pc = 0x134dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x134dc0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x134dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x134dc4: 0xa6020058  sh          $v0, 0x58($s0)
    ctx->pc = 0x134dc4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 88), (uint16_t)GPR_U32(ctx, 2));
    // 0x134dc8: 0x84a20002  lh          $v0, 0x2($a1)
    ctx->pc = 0x134dc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x134dcc: 0xa602005a  sh          $v0, 0x5A($s0)
    ctx->pc = 0x134dccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 90), (uint16_t)GPR_U32(ctx, 2));
    // 0x134dd0: 0x84a20004  lh          $v0, 0x4($a1)
    ctx->pc = 0x134dd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x134dd4: 0xa602005c  sh          $v0, 0x5C($s0)
    ctx->pc = 0x134dd4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 92), (uint16_t)GPR_U32(ctx, 2));
    // 0x134dd8: 0x84a20006  lh          $v0, 0x6($a1)
    ctx->pc = 0x134dd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x134ddc: 0xa602005e  sh          $v0, 0x5E($s0)
    ctx->pc = 0x134ddcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 94), (uint16_t)GPR_U32(ctx, 2));
label_134de0:
    // 0x134de0: 0x80e30000  lb          $v1, 0x0($a3)
    ctx->pc = 0x134de0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x134de4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x134de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x134de8: 0x80e20001  lb          $v0, 0x1($a3)
    ctx->pc = 0x134de8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x134dec: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x134decu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x134df0: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x134df0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x134df4: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x134df4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x134df8: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x134DF8u;
    {
        const bool branch_taken_0x134df8 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x134DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134DF8u;
            // 0x134dfc: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134df8) {
            ctx->pc = 0x134DE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_134de0;
        }
    }
    ctx->pc = 0x134E00u;
    // 0x134e00: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x134e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x134e04: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x134e04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x134e08: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x134e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x134e0c: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x134e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
    // 0x134e10: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x134e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x134e14: 0xae020088  sw          $v0, 0x88($s0)
    ctx->pc = 0x134e14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
    // 0x134e18: 0xdca20038  ld          $v0, 0x38($a1)
    ctx->pc = 0x134e18u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x134e1c: 0xfe020090  sd          $v0, 0x90($s0)
    ctx->pc = 0x134e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 144), GPR_U64(ctx, 2));
    // 0x134e20: 0xdca20040  ld          $v0, 0x40($a1)
    ctx->pc = 0x134e20u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x134e24: 0xfe020098  sd          $v0, 0x98($s0)
    ctx->pc = 0x134e24u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 152), GPR_U64(ctx, 2));
    // 0x134e28: 0xdca20048  ld          $v0, 0x48($a1)
    ctx->pc = 0x134e28u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x134e2c: 0xfe0200a0  sd          $v0, 0xA0($s0)
    ctx->pc = 0x134e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 160), GPR_U64(ctx, 2));
    // 0x134e30: 0xc4a30050  lwc1        $f3, 0x50($a1)
    ctx->pc = 0x134e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x134e34: 0xc4a20054  lwc1        $f2, 0x54($a1)
    ctx->pc = 0x134e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x134e38: 0xc4a10058  lwc1        $f1, 0x58($a1)
    ctx->pc = 0x134e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134e3c: 0xc4a0005c  lwc1        $f0, 0x5C($a1)
    ctx->pc = 0x134e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134e40: 0xe60300a8  swc1        $f3, 0xA8($s0)
    ctx->pc = 0x134e40u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x134e44: 0xe60200ac  swc1        $f2, 0xAC($s0)
    ctx->pc = 0x134e44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x134e48: 0xe60100b0  swc1        $f1, 0xB0($s0)
    ctx->pc = 0x134e48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
    // 0x134e4c: 0xe60000b4  swc1        $f0, 0xB4($s0)
    ctx->pc = 0x134e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
    // 0x134e50: 0x8ca20060  lw          $v0, 0x60($a1)
    ctx->pc = 0x134e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x134e54: 0xae0200b8  sw          $v0, 0xB8($s0)
    ctx->pc = 0x134e54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 2));
    // 0x134e58: 0x8ca20064  lw          $v0, 0x64($a1)
    ctx->pc = 0x134e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x134e5c: 0xae0200bc  sw          $v0, 0xBC($s0)
    ctx->pc = 0x134e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 2));
    // 0x134e60: 0x8ca20068  lw          $v0, 0x68($a1)
    ctx->pc = 0x134e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
    // 0x134e64: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x134e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
    // 0x134e68: 0x8e0500c8  lw          $a1, 0xC8($s0)
    ctx->pc = 0x134e68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x134e6c: 0xc04b154  jal         func_12C550
    ctx->pc = 0x134E6Cu;
    SET_GPR_U32(ctx, 31, 0x134E74u);
    ctx->pc = 0x134E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134E6Cu;
            // 0x134e70: 0x26040058  addiu       $a0, $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C550u;
    if (runtime->hasFunction(0x12C550u)) {
        auto targetFn = runtime->lookupFunction(0x12C550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134E74u; }
        if (ctx->pc != 0x134E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__10mgCTextureFi_0x12c550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134E74u; }
        if (ctx->pc != 0x134E74u) { return; }
    }
    ctx->pc = 0x134E74u;
label_134e74:
    // 0x134e74: 0x8e0700dc  lw          $a3, 0xDC($s0)
    ctx->pc = 0x134e74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x134e78: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x134e78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x134e7c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x134e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x134e80: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x134e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x134e84: 0xfce00000  sd          $zero, 0x0($a3)
    ctx->pc = 0x134e84u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 0));
    // 0x134e88: 0x24e30030  addiu       $v1, $a3, 0x30
    ctx->pc = 0x134e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x134e8c: 0xfce60008  sd          $a2, 0x8($a3)
    ctx->pc = 0x134e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 6));
    // 0x134e90: 0xde060098  ld          $a2, 0x98($s0)
    ctx->pc = 0x134e90u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x134e94: 0xfce60010  sd          $a2, 0x10($a3)
    ctx->pc = 0x134e94u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 16), GPR_U64(ctx, 6));
    // 0x134e98: 0xfce50018  sd          $a1, 0x18($a3)
    ctx->pc = 0x134e98u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 24), GPR_U64(ctx, 5));
    // 0x134e9c: 0xde050090  ld          $a1, 0x90($s0)
    ctx->pc = 0x134e9cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x134ea0: 0xfce50020  sd          $a1, 0x20($a3)
    ctx->pc = 0x134ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 32), GPR_U64(ctx, 5));
    // 0x134ea4: 0xfce40028  sd          $a0, 0x28($a3)
    ctx->pc = 0x134ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 40), GPR_U64(ctx, 4));
    // 0x134ea8: 0xae0300dc  sw          $v1, 0xDC($s0)
    ctx->pc = 0x134ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 3));
label_134eac:
    // 0x134eac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x134eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x134eb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x134eb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x134EB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134EB4u;
            // 0x134eb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x134EBCu;
}
