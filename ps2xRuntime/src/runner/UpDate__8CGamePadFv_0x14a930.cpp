#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: UpDate__8CGamePadFv
// Address: 0x14a930 - 0x14ae24
void UpDate__8CGamePadFv_0x14a930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpDate__8CGamePadFv_0x14a930");
#endif

    switch (ctx->pc) {
        case 0x14a9c4u: goto label_14a9c4;
        case 0x14a9f0u: goto label_14a9f0;
        case 0x14aa50u: goto label_14aa50;
        case 0x14aaacu: goto label_14aaac;
        case 0x14aad8u: goto label_14aad8;
        case 0x14ab38u: goto label_14ab38;
        case 0x14ab64u: goto label_14ab64;
        case 0x14ab74u: goto label_14ab74;
        case 0x14ab80u: goto label_14ab80;
        case 0x14aba8u: goto label_14aba8;
        case 0x14abc8u: goto label_14abc8;
        case 0x14abf0u: goto label_14abf0;
        case 0x14ac10u: goto label_14ac10;
        case 0x14ac48u: goto label_14ac48;
        case 0x14ac64u: goto label_14ac64;
        case 0x14ad5cu: goto label_14ad5c;
        case 0x14ae00u: goto label_14ae00;
        default: break;
    }

    ctx->pc = 0x14a930u;

    // 0x14a930: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x14a930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x14a934: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x14a934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x14a938: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x14a938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x14a93c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14a93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14a940: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14a940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14a944: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14a944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14a948: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14a948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14a94c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14a94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14a950: 0x838288cc  lb          $v0, -0x7734($gp)
    ctx->pc = 0x14a950u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936780)));
    // 0x14a954: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A954u;
    {
        const bool branch_taken_0x14a954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A954u;
            // 0x14a958: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a954) {
            ctx->pc = 0x14A968u;
            goto label_14a968;
        }
    }
    ctx->pc = 0x14A95Cu;
    // 0x14a95c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14a95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a960: 0xaf8088c8  sw          $zero, -0x7738($gp)
    ctx->pc = 0x14a960u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936776), GPR_U32(ctx, 0));
    // 0x14a964: 0xa38288cc  sb          $v0, -0x7734($gp)
    ctx->pc = 0x14a964u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936780), (uint8_t)GPR_U32(ctx, 2));
label_14a968:
    // 0x14a968: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x14a968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14a96c: 0x2606002c  addiu       $a2, $s0, 0x2C
    ctx->pc = 0x14a96cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x14a970: 0x260500c4  addiu       $a1, $s0, 0xC4
    ctx->pc = 0x14a970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    // 0x14a974: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x14a974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14a978: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x14a978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
    // 0x14a97c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x14a97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14a980: 0xae0200a0  sw          $v0, 0xA0($s0)
    ctx->pc = 0x14a980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
    // 0x14a984: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x14a984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x14a988: 0xae0200a4  sw          $v0, 0xA4($s0)
    ctx->pc = 0x14a988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
    // 0x14a98c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x14a98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x14a990: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x14a990u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
    // 0x14a994: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x14a994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x14a998: 0xae0200ac  sw          $v0, 0xAC($s0)
    ctx->pc = 0x14a998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 2));
    // 0x14a99c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x14a99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x14a9a0: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x14a9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    // 0x14a9a4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x14a9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x14a9a8: 0xae0200b4  sw          $v0, 0xB4($s0)
    ctx->pc = 0x14a9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
    // 0x14a9ac: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x14a9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x14a9b0: 0xae0200b8  sw          $v0, 0xB8($s0)
    ctx->pc = 0x14a9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 2));
    // 0x14a9b4: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x14a9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x14a9b8: 0xae0200bc  sw          $v0, 0xBC($s0)
    ctx->pc = 0x14a9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 2));
    // 0x14a9bc: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x14a9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x14a9c0: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x14a9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
label_14a9c4:
    // 0x14a9c4: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x14a9c4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14a9c8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x14a9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x14a9cc: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x14a9ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x14a9d0: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x14a9d0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x14a9d4: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x14a9d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x14a9d8: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x14a9d8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x14a9dc: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x14A9DCu;
    {
        const bool branch_taken_0x14a9dc = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x14A9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A9DCu;
            // 0x14a9e0: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a9dc) {
            ctx->pc = 0x14A9C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14a9c4;
        }
    }
    ctx->pc = 0x14A9E4u;
    // 0x14a9e4: 0x26060032  addiu       $a2, $s0, 0x32
    ctx->pc = 0x14a9e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 50));
    // 0x14a9e8: 0x260500ca  addiu       $a1, $s0, 0xCA
    ctx->pc = 0x14a9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 202));
    // 0x14a9ec: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x14a9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_14a9f0:
    // 0x14a9f0: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x14a9f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14a9f4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x14a9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x14a9f8: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x14a9f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x14a9fc: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x14a9fcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x14aa00: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x14aa00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x14aa04: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x14aa04u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x14aa08: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x14AA08u;
    {
        const bool branch_taken_0x14aa08 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x14AA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AA08u;
            // 0x14aa0c: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aa08) {
            ctx->pc = 0x14A9F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14a9f0;
        }
    }
    ctx->pc = 0x14AA10u;
    // 0x14aa10: 0xc6030038  lwc1        $f3, 0x38($s0)
    ctx->pc = 0x14aa10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14aa14: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x14aa14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x14aa18: 0xc602003c  lwc1        $f2, 0x3C($s0)
    ctx->pc = 0x14aa18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14aa1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14aa1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aa20: 0xc6010040  lwc1        $f1, 0x40($s0)
    ctx->pc = 0x14aa20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14aa24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14aa24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aa28: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x14aa28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14aa2c: 0xe60300d0  swc1        $f3, 0xD0($s0)
    ctx->pc = 0x14aa2cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x14aa30: 0xe60200d4  swc1        $f2, 0xD4($s0)
    ctx->pc = 0x14aa30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x14aa34: 0xe60100d8  swc1        $f1, 0xD8($s0)
    ctx->pc = 0x14aa34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
    // 0x14aa38: 0xe60000dc  swc1        $f0, 0xDC($s0)
    ctx->pc = 0x14aa38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 220), bits); }
    // 0x14aa3c: 0xc6010048  lwc1        $f1, 0x48($s0)
    ctx->pc = 0x14aa3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14aa40: 0xc600004c  lwc1        $f0, 0x4C($s0)
    ctx->pc = 0x14aa40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14aa44: 0xe60100e0  swc1        $f1, 0xE0($s0)
    ctx->pc = 0x14aa44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x14aa48: 0xc052924  jal         func_14A490
    ctx->pc = 0x14AA48u;
    SET_GPR_U32(ctx, 31, 0x14AA50u);
    ctx->pc = 0x14AA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AA48u;
            // 0x14aa4c: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A490u;
    if (runtime->hasFunction(0x14A490u)) {
        auto targetFn = runtime->lookupFunction(0x14A490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AA50u; }
        if (ctx->pc != 0x14AA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        read_pad__FP10PAD_STATUSii_0x14a490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AA50u; }
        if (ctx->pc != 0x14AA50u) { return; }
    }
    ctx->pc = 0x14AA50u;
label_14aa50:
    // 0x14aa50: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x14aa50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x14aa54: 0x26060078  addiu       $a2, $s0, 0x78
    ctx->pc = 0x14aa54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x14aa58: 0x26050110  addiu       $a1, $s0, 0x110
    ctx->pc = 0x14aa58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x14aa5c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x14aa5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14aa60: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x14aa60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
    // 0x14aa64: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x14aa64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x14aa68: 0xae0200ec  sw          $v0, 0xEC($s0)
    ctx->pc = 0x14aa68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 2));
    // 0x14aa6c: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x14aa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x14aa70: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x14aa70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    // 0x14aa74: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x14aa74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x14aa78: 0xae0200f4  sw          $v0, 0xF4($s0)
    ctx->pc = 0x14aa78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
    // 0x14aa7c: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x14aa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x14aa80: 0xae0200f8  sw          $v0, 0xF8($s0)
    ctx->pc = 0x14aa80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 2));
    // 0x14aa84: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x14aa84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x14aa88: 0xae0200fc  sw          $v0, 0xFC($s0)
    ctx->pc = 0x14aa88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 2));
    // 0x14aa8c: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x14aa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x14aa90: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x14aa90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x14aa94: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x14aa94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x14aa98: 0xae020104  sw          $v0, 0x104($s0)
    ctx->pc = 0x14aa98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 2));
    // 0x14aa9c: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x14aa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x14aaa0: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x14aaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    // 0x14aaa4: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x14aaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x14aaa8: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x14aaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_14aaac:
    // 0x14aaac: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x14aaacu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14aab0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x14aab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x14aab4: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x14aab4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x14aab8: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x14aab8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x14aabc: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x14aabcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x14aac0: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x14aac0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x14aac4: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x14AAC4u;
    {
        const bool branch_taken_0x14aac4 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x14AAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AAC4u;
            // 0x14aac8: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aac4) {
            ctx->pc = 0x14AAACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14aaac;
        }
    }
    ctx->pc = 0x14AACCu;
    // 0x14aacc: 0x2606007e  addiu       $a2, $s0, 0x7E
    ctx->pc = 0x14aaccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 126));
    // 0x14aad0: 0x26050116  addiu       $a1, $s0, 0x116
    ctx->pc = 0x14aad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 278));
    // 0x14aad4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x14aad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_14aad8:
    // 0x14aad8: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x14aad8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14aadc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x14aadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x14aae0: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x14aae0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x14aae4: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x14aae4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x14aae8: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x14aae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x14aaec: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x14aaecu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x14aaf0: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x14AAF0u;
    {
        const bool branch_taken_0x14aaf0 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x14AAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AAF0u;
            // 0x14aaf4: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aaf0) {
            ctx->pc = 0x14AAD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14aad8;
        }
    }
    ctx->pc = 0x14AAF8u;
    // 0x14aaf8: 0xc6030084  lwc1        $f3, 0x84($s0)
    ctx->pc = 0x14aaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14aafc: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x14aafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x14ab00: 0xc6020088  lwc1        $f2, 0x88($s0)
    ctx->pc = 0x14ab00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14ab04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14ab04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ab08: 0xc601008c  lwc1        $f1, 0x8C($s0)
    ctx->pc = 0x14ab08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ab0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14ab0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ab10: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x14ab10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ab14: 0xe603011c  swc1        $f3, 0x11C($s0)
    ctx->pc = 0x14ab14u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 284), bits); }
    // 0x14ab18: 0xe6020120  swc1        $f2, 0x120($s0)
    ctx->pc = 0x14ab18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x14ab1c: 0xe6010124  swc1        $f1, 0x124($s0)
    ctx->pc = 0x14ab1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x14ab20: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x14ab20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x14ab24: 0xc6010094  lwc1        $f1, 0x94($s0)
    ctx->pc = 0x14ab24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ab28: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x14ab28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ab2c: 0xe601012c  swc1        $f1, 0x12C($s0)
    ctx->pc = 0x14ab2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x14ab30: 0xc052924  jal         func_14A490
    ctx->pc = 0x14AB30u;
    SET_GPR_U32(ctx, 31, 0x14AB38u);
    ctx->pc = 0x14AB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AB30u;
            // 0x14ab34: 0xe6000130  swc1        $f0, 0x130($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A490u;
    if (runtime->hasFunction(0x14A490u)) {
        auto targetFn = runtime->lookupFunction(0x14A490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB38u; }
        if (ctx->pc != 0x14AB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        read_pad__FP10PAD_STATUSii_0x14a490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB38u; }
        if (ctx->pc != 0x14AB38u) { return; }
    }
    ctx->pc = 0x14AB38u;
label_14ab38:
    // 0x14ab38: 0x8e030470  lw          $v1, 0x470($s0)
    ctx->pc = 0x14ab38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1136)));
    // 0x14ab3c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14ab3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14ab40: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14AB40u;
    {
        const bool branch_taken_0x14ab40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14AB44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AB40u;
            // 0x14ab44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ab40) {
            ctx->pc = 0x14AB6Cu;
            goto label_14ab6c;
        }
    }
    ctx->pc = 0x14AB48u;
    // 0x14ab48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14ab48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ab4c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14AB4Cu;
    {
        const bool branch_taken_0x14ab4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14AB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AB4Cu;
            // 0x14ab50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ab4c) {
            ctx->pc = 0x14AB5Cu;
            goto label_14ab5c;
        }
    }
    ctx->pc = 0x14AB54u;
    // 0x14ab54: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14AB54u;
    {
        const bool branch_taken_0x14ab54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AB58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AB54u;
            // 0x14ab58: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ab54) {
            ctx->pc = 0x14AB78u;
            goto label_14ab78;
        }
    }
    ctx->pc = 0x14AB5Cu;
label_14ab5c:
    // 0x14ab5c: 0xc052d88  jal         func_14B620
    ctx->pc = 0x14AB5Cu;
    SET_GPR_U32(ctx, 31, 0x14AB64u);
    ctx->pc = 0x14AB60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AB5Cu;
            // 0x14ab60: 0x26050004  addiu       $a1, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B620u;
    if (runtime->hasFunction(0x14B620u)) {
        auto targetFn = runtime->lookupFunction(0x14B620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB64u; }
        if (ctx->pc != 0x14AB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Capture__8CGamePadFP10PAD_STATUS_0x14b620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB64u; }
        if (ctx->pc != 0x14AB64u) { return; }
    }
    ctx->pc = 0x14AB64u;
label_14ab64:
    // 0x14ab64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14AB64u;
    {
        const bool branch_taken_0x14ab64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ab64) {
            ctx->pc = 0x14AB74u;
            goto label_14ab74;
        }
    }
    ctx->pc = 0x14AB6Cu;
label_14ab6c:
    // 0x14ab6c: 0xc052da4  jal         func_14B690
    ctx->pc = 0x14AB6Cu;
    SET_GPR_U32(ctx, 31, 0x14AB74u);
    ctx->pc = 0x14AB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AB6Cu;
            // 0x14ab70: 0x26050004  addiu       $a1, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B690u;
    if (runtime->hasFunction(0x14B690u)) {
        auto targetFn = runtime->lookupFunction(0x14B690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB74u; }
        if (ctx->pc != 0x14AB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Play__8CGamePadFP10PAD_STATUS_0x14b690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB74u; }
        if (ctx->pc != 0x14AB74u) { return; }
    }
    ctx->pc = 0x14AB74u;
label_14ab74:
    // 0x14ab74: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x14ab74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14ab78:
    // 0x14ab78: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x14ab78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ab7c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x14ab7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14ab80:
    // 0x14ab80: 0x2131021  addu        $v0, $s0, $s3
    ctx->pc = 0x14ab80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x14ab84: 0x8c520454  lw          $s2, 0x454($v0)
    ctx->pc = 0x14ab84u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1108)));
    // 0x14ab88: 0x6410002  bgez        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x14AB88u;
    {
        const bool branch_taken_0x14ab88 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x14ab88) {
            ctx->pc = 0x14AB94u;
            goto label_14ab94;
        }
    }
    ctx->pc = 0x14AB90u;
    // 0x14ab90: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x14ab90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14ab94:
    // 0x14ab94: 0x0  nop
    ctx->pc = 0x14ab94u;
    // NOP
    // 0x14ab98: 0x1a400023  blez        $s2, . + 4 + (0x23 << 2)
    ctx->pc = 0x14AB98u;
    {
        const bool branch_taken_0x14ab98 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x14AB9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AB98u;
            // 0x14ab9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ab98) {
            ctx->pc = 0x14AC28u;
            goto label_14ac28;
        }
    }
    ctx->pc = 0x14ABA0u;
    // 0x14aba0: 0xc052be8  jal         func_14AFA0
    ctx->pc = 0x14ABA0u;
    SET_GPR_U32(ctx, 31, 0x14ABA8u);
    ctx->pc = 0x14AFA0u;
    if (runtime->hasFunction(0x14AFA0u)) {
        auto targetFn = runtime->lookupFunction(0x14AFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ABA8u; }
        if (ctx->pc != 0x14ABA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLX__8CGamePadFv_0x14afa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ABA8u; }
        if (ctx->pc != 0x14ABA8u) { return; }
    }
    ctx->pc = 0x14ABA8u;
label_14aba8:
    // 0x14aba8: 0x242082a  slt         $at, $s2, $v0
    ctx->pc = 0x14aba8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14abac: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x14ABACu;
    {
        const bool branch_taken_0x14abac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ABB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14ABACu;
            // 0x14abb0: 0x2141821  addu        $v1, $s0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14abac) {
            ctx->pc = 0x14ABC0u;
            goto label_14abc0;
        }
    }
    ctx->pc = 0x14ABB4u;
    // 0x14abb4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x14abb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x14abb8: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x14abb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x14abbc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x14abbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_14abc0:
    // 0x14abc0: 0xc052be8  jal         func_14AFA0
    ctx->pc = 0x14ABC0u;
    SET_GPR_U32(ctx, 31, 0x14ABC8u);
    ctx->pc = 0x14ABC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14ABC0u;
            // 0x14abc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14AFA0u;
    if (runtime->hasFunction(0x14AFA0u)) {
        auto targetFn = runtime->lookupFunction(0x14AFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ABC8u; }
        if (ctx->pc != 0x14ABC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLX__8CGamePadFv_0x14afa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ABC8u; }
        if (ctx->pc != 0x14ABC8u) { return; }
    }
    ctx->pc = 0x14ABC8u;
label_14abc8:
    // 0x14abc8: 0x12a823  negu        $s5, $s2
    ctx->pc = 0x14abc8u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
    // 0x14abcc: 0x55082a  slt         $at, $v0, $s5
    ctx->pc = 0x14abccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x14abd0: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x14ABD0u;
    {
        const bool branch_taken_0x14abd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ABD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14ABD0u;
            // 0x14abd4: 0x2141821  addu        $v1, $s0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14abd0) {
            ctx->pc = 0x14ABE4u;
            goto label_14abe4;
        }
    }
    ctx->pc = 0x14ABD8u;
    // 0x14abd8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x14abd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x14abdc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x14abdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x14abe0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x14abe0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_14abe4:
    // 0x14abe4: 0x0  nop
    ctx->pc = 0x14abe4u;
    // NOP
    // 0x14abe8: 0xc052bec  jal         func_14AFB0
    ctx->pc = 0x14ABE8u;
    SET_GPR_U32(ctx, 31, 0x14ABF0u);
    ctx->pc = 0x14ABECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14ABE8u;
            // 0x14abec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14AFB0u;
    if (runtime->hasFunction(0x14AFB0u)) {
        auto targetFn = runtime->lookupFunction(0x14AFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ABF0u; }
        if (ctx->pc != 0x14ABF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLY__8CGamePadFv_0x14afb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ABF0u; }
        if (ctx->pc != 0x14ABF0u) { return; }
    }
    ctx->pc = 0x14ABF0u;
label_14abf0:
    // 0x14abf0: 0x242082a  slt         $at, $s2, $v0
    ctx->pc = 0x14abf0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14abf4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x14ABF4u;
    {
        const bool branch_taken_0x14abf4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ABF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14ABF4u;
            // 0x14abf8: 0x2141821  addu        $v1, $s0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14abf4) {
            ctx->pc = 0x14AC08u;
            goto label_14ac08;
        }
    }
    ctx->pc = 0x14ABFCu;
    // 0x14abfc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x14abfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x14ac00: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x14ac00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x14ac04: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x14ac04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_14ac08:
    // 0x14ac08: 0xc052bec  jal         func_14AFB0
    ctx->pc = 0x14AC08u;
    SET_GPR_U32(ctx, 31, 0x14AC10u);
    ctx->pc = 0x14AC0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AC08u;
            // 0x14ac0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14AFB0u;
    if (runtime->hasFunction(0x14AFB0u)) {
        auto targetFn = runtime->lookupFunction(0x14AFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AC10u; }
        if (ctx->pc != 0x14AC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLY__8CGamePadFv_0x14afb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AC10u; }
        if (ctx->pc != 0x14AC10u) { return; }
    }
    ctx->pc = 0x14AC10u;
label_14ac10:
    // 0x14ac10: 0x55082a  slt         $at, $v0, $s5
    ctx->pc = 0x14ac10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x14ac14: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x14AC14u;
    {
        const bool branch_taken_0x14ac14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AC18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AC14u;
            // 0x14ac18: 0x2141821  addu        $v1, $s0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ac14) {
            ctx->pc = 0x14AC28u;
            goto label_14ac28;
        }
    }
    ctx->pc = 0x14AC1Cu;
    // 0x14ac1c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x14ac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x14ac20: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x14ac20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x14ac24: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x14ac24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_14ac28:
    // 0x14ac28: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x14ac28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x14ac2c: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x14ac2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x14ac30: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x14ac30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x14ac34: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x14AC34u;
    {
        const bool branch_taken_0x14ac34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14AC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AC34u;
            // 0x14ac38: 0x2694004c  addiu       $s4, $s4, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ac34) {
            ctx->pc = 0x14AB80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14ab80;
        }
    }
    ctx->pc = 0x14AC3Cu;
    // 0x14ac3c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x14ac3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ac40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x14ac40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ac44: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x14ac44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14ac48:
    // 0x14ac48: 0x2071021  addu        $v0, $s0, $a3
    ctx->pc = 0x14ac48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x14ac4c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14ac4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ac50: 0x24450144  addiu       $a1, $v0, 0x144
    ctx->pc = 0x14ac50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 324));
    // 0x14ac54: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x14ac54u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ac58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14ac58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ac5c: 0x2081021  addu        $v0, $s0, $t0
    ctx->pc = 0x14ac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x14ac60: 0x24490004  addiu       $t1, $v0, 0x4
    ctx->pc = 0x14ac60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_14ac64:
    // 0x14ac64: 0x0  nop
    ctx->pc = 0x14ac64u;
    // NOP
    // 0x14ac68: 0x8cac0000  lw          $t4, 0x0($a1)
    ctx->pc = 0x14ac68u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14ac6c: 0x1845824  and         $t3, $t4, $a0
    ctx->pc = 0x14ac6cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) & GPR_U64(ctx, 4));
    // 0x14ac70: 0x1160002a  beqz        $t3, . + 4 + (0x2A << 2)
    ctx->pc = 0x14AC70u;
    {
        const bool branch_taken_0x14ac70 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ac70) {
            ctx->pc = 0x14AD1Cu;
            goto label_14ad1c;
        }
    }
    ctx->pc = 0x14AC78u;
    // 0x14ac78: 0x8c4b0004  lw          $t3, 0x4($v0)
    ctx->pc = 0x14ac78u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14ac7c: 0x16c5824  and         $t3, $t3, $t4
    ctx->pc = 0x14ac7cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 12));
    // 0x14ac80: 0x8b5824  and         $t3, $a0, $t3
    ctx->pc = 0x14ac80u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) & GPR_U64(ctx, 11));
    // 0x14ac84: 0x1160000d  beqz        $t3, . + 4 + (0xD << 2)
    ctx->pc = 0x14AC84u;
    {
        const bool branch_taken_0x14ac84 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AC88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AC84u;
            // 0x14ac88: 0xa66821  addu        $t5, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ac84) {
            ctx->pc = 0x14ACBCu;
            goto label_14acbc;
        }
    }
    ctx->pc = 0x14AC8Cu;
    // 0x14ac8c: 0x8dab0008  lw          $t3, 0x8($t5)
    ctx->pc = 0x14ac8cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x14ac90: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x14ac90u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x14ac94: 0xadab0008  sw          $t3, 0x8($t5)
    ctx->pc = 0x14ac94u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 11));
    // 0x14ac98: 0x8dac0008  lw          $t4, 0x8($t5)
    ctx->pc = 0x14ac98u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x14ac9c: 0x8dab0088  lw          $t3, 0x88($t5)
    ctx->pc = 0x14ac9cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 136)));
    // 0x14aca0: 0x18b582a  slt         $t3, $t4, $t3
    ctx->pc = 0x14aca0u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x14aca4: 0x1560000c  bnez        $t3, . + 4 + (0xC << 2)
    ctx->pc = 0x14ACA4u;
    {
        const bool branch_taken_0x14aca4 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x14aca4) {
            ctx->pc = 0x14ACD8u;
            goto label_14acd8;
        }
    }
    ctx->pc = 0x14ACACu;
    // 0x14acac: 0x8cab0004  lw          $t3, 0x4($a1)
    ctx->pc = 0x14acacu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x14acb0: 0x1645825  or          $t3, $t3, $a0
    ctx->pc = 0x14acb0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 4));
    // 0x14acb4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14ACB4u;
    {
        const bool branch_taken_0x14acb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ACB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14ACB4u;
            // 0x14acb8: 0xacab0004  sw          $t3, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14acb4) {
            ctx->pc = 0x14ACD8u;
            goto label_14acd8;
        }
    }
    ctx->pc = 0x14ACBCu;
label_14acbc:
    // 0x14acbc: 0x0  nop
    ctx->pc = 0x14acbcu;
    // NOP
    // 0x14acc0: 0xa65821  addu        $t3, $a1, $a2
    ctx->pc = 0x14acc0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x14acc4: 0xad600008  sw          $zero, 0x8($t3)
    ctx->pc = 0x14acc4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 0));
    // 0x14acc8: 0x806027  not         $t4, $a0
    ctx->pc = 0x14acc8u;
    SET_GPR_U64(ctx, 12, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
    // 0x14accc: 0x8cab0004  lw          $t3, 0x4($a1)
    ctx->pc = 0x14acccu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x14acd0: 0x16c5824  and         $t3, $t3, $t4
    ctx->pc = 0x14acd0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 12));
    // 0x14acd4: 0xacab0004  sw          $t3, 0x4($a1)
    ctx->pc = 0x14acd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 11));
label_14acd8:
    // 0x14acd8: 0xa65821  addu        $t3, $a1, $a2
    ctx->pc = 0x14acd8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x14acdc: 0x8d6c0008  lw          $t4, 0x8($t3)
    ctx->pc = 0x14acdcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x14ace0: 0x256d0008  addiu       $t5, $t3, 0x8
    ctx->pc = 0x14ace0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x14ace4: 0x8d6b0108  lw          $t3, 0x108($t3)
    ctx->pc = 0x14ace4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 264)));
    // 0x14ace8: 0x18b582a  slt         $t3, $t4, $t3
    ctx->pc = 0x14ace8u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x14acec: 0x396b0001  xori        $t3, $t3, 0x1
    ctx->pc = 0x14acecu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) ^ (uint64_t)(uint16_t)1);
    // 0x14acf0: 0x1160000a  beqz        $t3, . + 4 + (0xA << 2)
    ctx->pc = 0x14ACF0u;
    {
        const bool branch_taken_0x14acf0 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x14acf0) {
            ctx->pc = 0x14AD1Cu;
            goto label_14ad1c;
        }
    }
    ctx->pc = 0x14ACF8u;
    // 0x14acf8: 0x8cab0004  lw          $t3, 0x4($a1)
    ctx->pc = 0x14acf8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x14acfc: 0x1645824  and         $t3, $t3, $a0
    ctx->pc = 0x14acfcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 4));
    // 0x14ad00: 0x11600006  beqz        $t3, . + 4 + (0x6 << 2)
    ctx->pc = 0x14AD00u;
    {
        const bool branch_taken_0x14ad00 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ad00) {
            ctx->pc = 0x14AD1Cu;
            goto label_14ad1c;
        }
    }
    ctx->pc = 0x14AD08u;
    // 0x14ad08: 0x8d2b0000  lw          $t3, 0x0($t1)
    ctx->pc = 0x14ad08u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x14ad0c: 0x806027  not         $t4, $a0
    ctx->pc = 0x14ad0cu;
    SET_GPR_U64(ctx, 12, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
    // 0x14ad10: 0x16c5824  and         $t3, $t3, $t4
    ctx->pc = 0x14ad10u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 12));
    // 0x14ad14: 0xad2b0000  sw          $t3, 0x0($t1)
    ctx->pc = 0x14ad14u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 11));
    // 0x14ad18: 0xada00000  sw          $zero, 0x0($t5)
    ctx->pc = 0x14ad18u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 0));
label_14ad1c:
    // 0x14ad1c: 0x0  nop
    ctx->pc = 0x14ad1cu;
    // NOP
    // 0x14ad20: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x14ad20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x14ad24: 0x294b0020  slti        $t3, $t2, 0x20
    ctx->pc = 0x14ad24u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x14ad28: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x14ad28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x14ad2c: 0x1560ffcd  bnez        $t3, . + 4 + (-0x33 << 2)
    ctx->pc = 0x14AD2Cu;
    {
        const bool branch_taken_0x14ad2c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x14AD30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AD2Cu;
            // 0x14ad30: 0x42040  sll         $a0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ad2c) {
            ctx->pc = 0x14AC64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14ac64;
        }
    }
    ctx->pc = 0x14AD34u;
    // 0x14ad34: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14ad34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14ad38: 0x24e70188  addiu       $a3, $a3, 0x188
    ctx->pc = 0x14ad38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 392));
    // 0x14ad3c: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x14ad3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x14ad40: 0x1440ffc1  bnez        $v0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x14AD40u;
    {
        const bool branch_taken_0x14ad40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14AD44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AD40u;
            // 0x14ad44: 0x2508004c  addiu       $t0, $t0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ad40) {
            ctx->pc = 0x14AC48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14ac48;
        }
    }
    ctx->pc = 0x14AD48u;
    // 0x14ad48: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x14ad48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ad4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14ad4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ad50: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x14ad50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x14ad54: 0x2404afff  addiu       $a0, $zero, -0x5001
    ctx->pc = 0x14ad54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294946815));
    // 0x14ad58: 0x34435fff  ori         $v1, $v0, 0x5FFF
    ctx->pc = 0x14ad58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24575);
label_14ad5c:
    // 0x14ad5c: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x14ad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x14ad60: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x14ad60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14ad64: 0x24470004  addiu       $a3, $v0, 0x4
    ctx->pc = 0x14ad64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x14ad68: 0x30c21000  andi        $v0, $a2, 0x1000
    ctx->pc = 0x14ad68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4096);
    // 0x14ad6c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14AD6Cu;
    {
        const bool branch_taken_0x14ad6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AD70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AD6Cu;
            // 0x14ad70: 0x30c24000  andi        $v0, $a2, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ad6c) {
            ctx->pc = 0x14AD80u;
            goto label_14ad80;
        }
    }
    ctx->pc = 0x14AD74u;
    // 0x14ad74: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x14AD74u;
    {
        const bool branch_taken_0x14ad74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AD78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AD74u;
            // 0x14ad78: 0xc41024  and         $v0, $a2, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ad74) {
            ctx->pc = 0x14AD80u;
            goto label_14ad80;
        }
    }
    ctx->pc = 0x14AD7Cu;
    // 0x14ad7c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x14ad7cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_14ad80:
    // 0x14ad80: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x14ad80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14ad84: 0x30c22000  andi        $v0, $a2, 0x2000
    ctx->pc = 0x14ad84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8192);
    // 0x14ad88: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14AD88u;
    {
        const bool branch_taken_0x14ad88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AD8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AD88u;
            // 0x14ad8c: 0x30c28000  andi        $v0, $a2, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ad88) {
            ctx->pc = 0x14AD9Cu;
            goto label_14ad9c;
        }
    }
    ctx->pc = 0x14AD90u;
    // 0x14ad90: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x14AD90u;
    {
        const bool branch_taken_0x14ad90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AD94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AD90u;
            // 0x14ad94: 0xc31024  and         $v0, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ad90) {
            ctx->pc = 0x14AD9Cu;
            goto label_14ad9c;
        }
    }
    ctx->pc = 0x14AD98u;
    // 0x14ad98: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x14ad98u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_14ad9c:
    // 0x14ad9c: 0x0  nop
    ctx->pc = 0x14ad9cu;
    // NOP
    // 0x14ada0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x14ada0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x14ada4: 0x29020002  slti        $v0, $t0, 0x2
    ctx->pc = 0x14ada4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x14ada8: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x14ADA8u;
    {
        const bool branch_taken_0x14ada8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14ADACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14ADA8u;
            // 0x14adac: 0x24a5004c  addiu       $a1, $a1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ada8) {
            ctx->pc = 0x14AD5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14ad5c;
        }
    }
    ctx->pc = 0x14ADB0u;
    // 0x14adb0: 0x8e020460  lw          $v0, 0x460($s0)
    ctx->pc = 0x14adb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1120)));
    // 0x14adb4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x14ADB4u;
    {
        const bool branch_taken_0x14adb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14adb4) {
            ctx->pc = 0x14ADE8u;
            goto label_14ade8;
        }
    }
    ctx->pc = 0x14ADBCu;
    // 0x14adbc: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x14adbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x14adc0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x14adc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14adc4: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x14adc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x14adc8: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x14adc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x14adcc: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x14adccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x14add0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x14add0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x14add4: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x14add4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x14add8: 0xae0200f8  sw          $v0, 0xF8($s0)
    ctx->pc = 0x14add8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 2));
    // 0x14addc: 0xae0200f4  sw          $v0, 0xF4($s0)
    ctx->pc = 0x14addcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
    // 0x14ade0: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x14ade0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    // 0x14ade4: 0xae0200ec  sw          $v0, 0xEC($s0)
    ctx->pc = 0x14ade4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 2));
label_14ade8:
    // 0x14ade8: 0x8f8288c8  lw          $v0, -0x7738($gp)
    ctx->pc = 0x14ade8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936776)));
    // 0x14adec: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x14adecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14adf0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x14adf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x14adf4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14adf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14adf8: 0xc052dd8  jal         func_14B760
    ctx->pc = 0x14ADF8u;
    SET_GPR_U32(ctx, 31, 0x14AE00u);
    ctx->pc = 0x14ADFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14ADF8u;
            // 0x14adfc: 0xaf8288c8  sw          $v0, -0x7738($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936776), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B760u;
    if (runtime->hasFunction(0x14B760u)) {
        auto targetFn = runtime->lookupFunction(0x14B760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AE00u; }
        if (ctx->pc != 0x14AE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SwitchGamePadThread__Fv_0x14b760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AE00u; }
        if (ctx->pc != 0x14AE00u) { return; }
    }
    ctx->pc = 0x14AE00u;
label_14ae00:
    // 0x14ae00: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x14ae00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14ae04: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x14ae04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14ae08: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14ae08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14ae0c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14ae0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14ae10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14ae10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14ae14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14ae14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ae18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14ae18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ae1c: 0x3e00008  jr          $ra
    ctx->pc = 0x14AE1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14AE20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AE1Cu;
            // 0x14ae20: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14AE24u;
}
