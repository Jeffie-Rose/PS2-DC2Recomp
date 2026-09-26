#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ReloadTexture__17mgCTextureManagerFiPUi
// Address: 0x12e970 - 0x12ed68
void ReloadTexture__17mgCTextureManagerFiPUi_0x12e970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ReloadTexture__17mgCTextureManagerFiPUi_0x12e970");
#endif

    switch (ctx->pc) {
        case 0x12e9f8u: goto label_12e9f8;
        case 0x12ea30u: goto label_12ea30;
        case 0x12eaa8u: goto label_12eaa8;
        case 0x12eb44u: goto label_12eb44;
        case 0x12eb5cu: goto label_12eb5c;
        case 0x12ec28u: goto label_12ec28;
        case 0x12ecf4u: goto label_12ecf4;
        default: break;
    }

    ctx->pc = 0x12e970u;

    // 0x12e970: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x12e970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x12e974: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x12e974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x12e978: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x12e978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x12e97c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x12e97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x12e980: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x12e980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x12e984: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x12e984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x12e988: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x12e988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x12e98c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x12e98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x12e990: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x12e990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x12e994: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x12e994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x12e998: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x12e998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x12e99c: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x12e99cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e9a0: 0xafa500b4  sw          $a1, 0xB4($sp)
    ctx->pc = 0x12e9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 5));
    // 0x12e9a4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x12e9a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e9a8: 0x12a0000d  beqz        $s5, . + 4 + (0xD << 2)
    ctx->pc = 0x12E9A8u;
    {
        const bool branch_taken_0x12e9a8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e9a8) {
            ctx->pc = 0x12E9E0u;
            goto label_12e9e0;
        }
    }
    ctx->pc = 0x12E9B0u;
    // 0x12e9b0: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x12e9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x12e9b4: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12E9B4u;
    {
        const bool branch_taken_0x12e9b4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x12e9b4) {
            ctx->pc = 0x12E9CCu;
            goto label_12e9cc;
        }
    }
    ctx->pc = 0x12E9BCu;
    // 0x12e9bc: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x12e9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x12e9c0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x12e9c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x12e9c4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12E9C4u;
    {
        const bool branch_taken_0x12e9c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e9c4) {
            ctx->pc = 0x12E9E0u;
            goto label_12e9e0;
        }
    }
    ctx->pc = 0x12E9CCu;
label_12e9cc:
    // 0x12e9cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12e9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12e9d0: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x12e9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x12e9d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12e9d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e9d8: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x12E9D8u;
    {
        const bool branch_taken_0x12e9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e9d8) {
            ctx->pc = 0x12ED34u;
            goto label_12ed34;
        }
    }
    ctx->pc = 0x12E9E0u;
label_12e9e0:
    // 0x12e9e0: 0xafb500b0  sw          $s5, 0xB0($sp)
    ctx->pc = 0x12e9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 21));
    // 0x12e9e4: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x12E9E4u;
    {
        const bool branch_taken_0x12e9e4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e9e4) {
            ctx->pc = 0x12EA00u;
            goto label_12ea00;
        }
    }
    ctx->pc = 0x12E9ECu;
    // 0x12e9ec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12e9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e9f0: 0xc04ba00  jal         func_12E800
    ctx->pc = 0x12E9F0u;
    SET_GPR_U32(ctx, 31, 0x12E9F8u);
    ctx->pc = 0x12E800u;
    if (runtime->hasFunction(0x12E800u)) {
        auto targetFn = runtime->lookupFunction(0x12E800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E9F8u; }
        if (ctx->pc != 0x12E9F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTexFlush_TagCnt__FPUi_0x12e800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E9F8u; }
        if (ctx->pc != 0x12E9F8u) { return; }
    }
    ctx->pc = 0x12E9F8u;
label_12e9f8:
    // 0x12e9f8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x12e9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x12e9fc: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x12e9fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_12ea00:
    // 0x12ea00: 0x8fd70000  lw          $s7, 0x0($fp)
    ctx->pc = 0x12ea00u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x12ea04: 0x8fd60004  lw          $s6, 0x4($fp)
    ctx->pc = 0x12ea04u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x12ea08: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x12ea08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x12ea0c: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x12ea0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x12ea10: 0x106200b3  beq         $v1, $v0, . + 4 + (0xB3 << 2)
    ctx->pc = 0x12EA10u;
    {
        const bool branch_taken_0x12ea10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12ea10) {
            ctx->pc = 0x12ECE0u;
            goto label_12ece0;
        }
    }
    ctx->pc = 0x12EA18u;
    // 0x12ea18: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x12ea18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x12ea1c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x12ea1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x12ea20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12ea20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12ea24: 0x8c540008  lw          $s4, 0x8($v0)
    ctx->pc = 0x12ea24u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x12ea28: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x12EA28u;
    {
        const bool branch_taken_0x12ea28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ea28) {
            ctx->pc = 0x12ECD8u;
            goto label_12ecd8;
        }
    }
    ctx->pc = 0x12EA30u;
label_12ea30:
    // 0x12ea30: 0x96840038  lhu         $a0, 0x38($s4)
    ctx->pc = 0x12ea30u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x12ea34: 0x32e33fff  andi        $v1, $s7, 0x3FFF
    ctx->pc = 0x12ea34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)16383);
    // 0x12ea38: 0x2402c000  addiu       $v0, $zero, -0x4000
    ctx->pc = 0x12ea38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x12ea3c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x12ea3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x12ea40: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12ea40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12ea44: 0xa6820038  sh          $v0, 0x38($s4)
    ctx->pc = 0x12ea44u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 56), (uint16_t)GPR_U32(ctx, 2));
    // 0x12ea48: 0x86820006  lh          $v0, 0x6($s4)
    ctx->pc = 0x12ea48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x12ea4c: 0x28410009  slti        $at, $v0, 0x9
    ctx->pc = 0x12ea4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x12ea50: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x12EA50u;
    {
        const bool branch_taken_0x12ea50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ea50) {
            ctx->pc = 0x12EA98u;
            goto label_12ea98;
        }
    }
    ctx->pc = 0x12EA58u;
    // 0x12ea58: 0x26d6fffc  addiu       $s6, $s6, -0x4
    ctx->pc = 0x12ea58u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967292));
    // 0x12ea5c: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x12ea5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
    // 0x12ea60: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x12ea60u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x12ea64: 0xde850038  ld          $a1, 0x38($s4)
    ctx->pc = 0x12ea64u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x12ea68: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x12ea68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x12ea6c: 0x2217c  dsll32      $a0, $v0, 5
    ctx->pc = 0x12ea6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 5));
    // 0x12ea70: 0x3c02fff8  lui         $v0, 0xFFF8
    ctx->pc = 0x12ea70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65528 << 16));
    // 0x12ea74: 0x3442001f  ori         $v0, $v0, 0x1F
    ctx->pc = 0x12ea74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
    // 0x12ea78: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x12ea78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12ea7c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x12ea7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x12ea80: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x12ea80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x12ea84: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12ea84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12ea88: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12ea88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12ea8c: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x12ea8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x12ea90: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x12ea90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x12ea94: 0xfe820038  sd          $v0, 0x38($s4)
    ctx->pc = 0x12ea94u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 56), GPR_U64(ctx, 2));
label_12ea98:
    // 0x12ea98: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x12ea98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x12ea9c: 0x26850038  addiu       $a1, $s4, 0x38
    ctx->pc = 0x12ea9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 56));
    // 0x12eaa0: 0xc04bb5c  jal         func_12ED70
    ctx->pc = 0x12EAA0u;
    SET_GPR_U32(ctx, 31, 0x12EAA8u);
    ctx->pc = 0x12ED70u;
    if (runtime->hasFunction(0x12ED70u)) {
        auto targetFn = runtime->lookupFunction(0x12ED70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EAA8u; }
        if (ctx->pc != 0x12EAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__9sceGsTex0FRC9sceGsTex0_0x12ed70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EAA8u; }
        if (ctx->pc != 0x12EAA8u) { return; }
    }
    ctx->pc = 0x12EAA8u;
label_12eaa8:
    // 0x12eaa8: 0x8e820028  lw          $v0, 0x28($s4)
    ctx->pc = 0x12eaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x12eaac: 0x2e2b821  addu        $s7, $s7, $v0
    ctx->pc = 0x12eaacu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x12eab0: 0x86910002  lh          $s1, 0x2($s4)
    ctx->pc = 0x12eab0u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x12eab4: 0x86920004  lh          $s2, 0x4($s4)
    ctx->pc = 0x12eab4u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x12eab8: 0x86930006  lh          $s3, 0x6($s4)
    ctx->pc = 0x12eab8u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x12eabc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x12eabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12eac0: 0x16620019  bne         $s3, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x12EAC0u;
    {
        const bool branch_taken_0x12eac0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x12eac0) {
            ctx->pc = 0x12EB28u;
            goto label_12eb28;
        }
    }
    ctx->pc = 0x12EAC8u;
    // 0x12eac8: 0x8e820064  lw          $v0, 0x64($s4)
    ctx->pc = 0x12eac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
    // 0x12eacc: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x12EACCu;
    {
        const bool branch_taken_0x12eacc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12eacc) {
            ctx->pc = 0x12EB28u;
            goto label_12eb28;
        }
    }
    ctx->pc = 0x12EAD4u;
    // 0x12ead4: 0x118843  sra         $s1, $s1, 1
    ctx->pc = 0x12ead4u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
    // 0x12ead8: 0x129043  sra         $s2, $s2, 1
    ctx->pc = 0x12ead8u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 1));
    // 0x12eadc: 0x24130020  addiu       $s3, $zero, 0x20
    ctx->pc = 0x12eadcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12eae0: 0x97a400ba  lhu         $a0, 0xBA($sp)
    ctx->pc = 0x12eae0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 186)));
    // 0x12eae4: 0x3002003f  andi        $v0, $zero, 0x3F
    ctx->pc = 0x12eae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)63);
    // 0x12eae8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x12eae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x12eaec: 0x2402fc0f  addiu       $v0, $zero, -0x3F1
    ctx->pc = 0x12eaecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966287));
    // 0x12eaf0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x12eaf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x12eaf4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12eaf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12eaf8: 0xa7a200ba  sh          $v0, 0xBA($sp)
    ctx->pc = 0x12eaf8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 186), (uint16_t)GPR_U32(ctx, 2));
    // 0x12eafc: 0xdfa400b8  ld          $a0, 0xB8($sp)
    ctx->pc = 0x12eafcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12eb00: 0x4133c  dsll32      $v0, $a0, 12
    ctx->pc = 0x12eb00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 12));
    // 0x12eb04: 0x216be  dsrl32      $v0, $v0, 26
    ctx->pc = 0x12eb04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 26));
    // 0x12eb08: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x12eb08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x12eb0c: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x12eb0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x12eb10: 0x21bb8  dsll        $v1, $v0, 14
    ctx->pc = 0x12eb10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 14);
    // 0x12eb14: 0x3c02fff0  lui         $v0, 0xFFF0
    ctx->pc = 0x12eb14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65520 << 16));
    // 0x12eb18: 0x34423fff  ori         $v0, $v0, 0x3FFF
    ctx->pc = 0x12eb18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16383);
    // 0x12eb1c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x12eb1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x12eb20: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12eb20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12eb24: 0xffa200b8  sd          $v0, 0xB8($sp)
    ctx->pc = 0x12eb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 2));
label_12eb28:
    // 0x12eb28: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x12EB28u;
    {
        const bool branch_taken_0x12eb28 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x12eb28) {
            ctx->pc = 0x12EB4Cu;
            goto label_12eb4c;
        }
    }
    ctx->pc = 0x12EB30u;
    // 0x12eb30: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x12eb30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eb34: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12eb34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eb38: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x12eb38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eb3c: 0xc04bb64  jal         func_12ED90
    ctx->pc = 0x12EB3Cu;
    SET_GPR_U32(ctx, 31, 0x12EB44u);
    ctx->pc = 0x12ED90u;
    if (runtime->hasFunction(0x12ED90u)) {
        auto targetFn = runtime->lookupFunction(0x12ED90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EB44u; }
        if (ctx->pc != 0x12EB44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadCLUT__17mgCTextureManagerFP10mgCTexturePUi_0x12ed90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EB44u; }
        if (ctx->pc != 0x12EB44u) { return; }
    }
    ctx->pc = 0x12EB44u;
label_12eb44:
    // 0x12eb44: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12eb44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12eb48: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x12eb48u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_12eb4c:
    // 0x12eb4c: 0x0  nop
    ctx->pc = 0x12eb4cu;
    // NOP
    // 0x12eb50: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x12eb50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eb54: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x12EB54u;
    {
        const bool branch_taken_0x12eb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12eb54) {
            ctx->pc = 0x12ECBCu;
            goto label_12ecbc;
        }
    }
    ctx->pc = 0x12EB5Cu;
label_12eb5c:
    // 0x12eb5c: 0x0  nop
    ctx->pc = 0x12eb5cu;
    // NOP
    // 0x12eb60: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x12eb60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x12eb64: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x12eb64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x12eb68: 0x24620050  addiu       $v0, $v1, 0x50
    ctx->pc = 0x12eb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x12eb6c: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x12eb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x12eb70: 0x10600056  beqz        $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x12EB70u;
    {
        const bool branch_taken_0x12eb70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12eb70) {
            ctx->pc = 0x12ECCCu;
            goto label_12eccc;
        }
    }
    ctx->pc = 0x12EB78u;
    // 0x12eb78: 0xdfa500b8  ld          $a1, 0xB8($sp)
    ctx->pc = 0x12eb78u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12eb7c: 0x51b3c  dsll32      $v1, $a1, 12
    ctx->pc = 0x12eb7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 12));
    // 0x12eb80: 0x31ebe  dsrl32      $v1, $v1, 26
    ctx->pc = 0x12eb80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 26));
    // 0x12eb84: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x12EB84u;
    {
        const bool branch_taken_0x12eb84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12eb84) {
            ctx->pc = 0x12EBA8u;
            goto label_12eba8;
        }
    }
    ctx->pc = 0x12EB8Cu;
    // 0x12eb8c: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x12eb8cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x12eb90: 0x323b8  dsll        $a0, $v1, 14
    ctx->pc = 0x12eb90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 14);
    // 0x12eb94: 0x3c03fff0  lui         $v1, 0xFFF0
    ctx->pc = 0x12eb94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65520 << 16));
    // 0x12eb98: 0x34633fff  ori         $v1, $v1, 0x3FFF
    ctx->pc = 0x12eb98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16383);
    // 0x12eb9c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x12eb9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x12eba0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x12eba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x12eba4: 0xffa300b8  sd          $v1, 0xB8($sp)
    ctx->pc = 0x12eba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 3));
label_12eba8:
    // 0x12eba8: 0x12a00021  beqz        $s5, . + 4 + (0x21 << 2)
    ctx->pc = 0x12EBA8u;
    {
        const bool branch_taken_0x12eba8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x12eba8) {
            ctx->pc = 0x12EC30u;
            goto label_12ec30;
        }
    }
    ctx->pc = 0x12EBB0u;
    // 0x12ebb0: 0xffb10000  sd          $s1, 0x0($sp)
    ctx->pc = 0x12ebb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 17));
    // 0x12ebb4: 0xffb20008  sd          $s2, 0x8($sp)
    ctx->pc = 0x12ebb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 18));
    // 0x12ebb8: 0x97a300b8  lhu         $v1, 0xB8($sp)
    ctx->pc = 0x12ebb8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12ebbc: 0x30653fff  andi        $a1, $v1, 0x3FFF
    ctx->pc = 0x12ebbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x12ebc0: 0x97a300ba  lhu         $v1, 0xBA($sp)
    ctx->pc = 0x12ebc0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 186)));
    // 0x12ebc4: 0x31dbc  dsll32      $v1, $v1, 22
    ctx->pc = 0x12ebc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 22));
    // 0x12ebc8: 0x336be  dsrl32      $a2, $v1, 26
    ctx->pc = 0x12ebc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) >> (32 + 26));
    // 0x12ebcc: 0xdfa300b8  ld          $v1, 0xB8($sp)
    ctx->pc = 0x12ebccu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12ebd0: 0x31b3c  dsll32      $v1, $v1, 12
    ctx->pc = 0x12ebd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 12));
    // 0x12ebd4: 0x31ebe  dsrl32      $v1, $v1, 26
    ctx->pc = 0x12ebd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 26));
    // 0x12ebd8: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x12ebd8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x12ebdc: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x12ebdcu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x12ebe0: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x12ebe0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12ebe4: 0x2321018  mult        $v0, $s1, $s2
    ctx->pc = 0x12ebe4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x12ebe8: 0x2621818  mult        $v1, $s3, $v0
    ctx->pc = 0x12ebe8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x12ebec: 0x31103  sra         $v0, $v1, 4
    ctx->pc = 0x12ebecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
    // 0x12ebf0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12EBF0u;
    {
        const bool branch_taken_0x12ebf0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x12ebf0) {
            ctx->pc = 0x12EC00u;
            goto label_12ec00;
        }
    }
    ctx->pc = 0x12EBF8u;
    // 0x12ebf8: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x12ebf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x12ebfc: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x12ebfcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_12ec00:
    // 0x12ec00: 0x248c3  sra         $t1, $v0, 3
    ctx->pc = 0x12ec00u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 2), 3));
    // 0x12ec04: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12EC04u;
    {
        const bool branch_taken_0x12ec04 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x12ec04) {
            ctx->pc = 0x12EC14u;
            goto label_12ec14;
        }
    }
    ctx->pc = 0x12EC0Cu;
    // 0x12ec0c: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x12ec0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x12ec10: 0x248c3  sra         $t1, $v0, 3
    ctx->pc = 0x12ec10u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 2), 3));
label_12ec14:
    // 0x12ec14: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12ec14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ec18: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x12ec18u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ec1c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x12ec1cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ec20: 0xc04b980  jal         func_12E600
    ctx->pc = 0x12EC20u;
    SET_GPR_U32(ctx, 31, 0x12EC28u);
    ctx->pc = 0x12E600u;
    if (runtime->hasFunction(0x12E600u)) {
        auto targetFn = runtime->lookupFunction(0x12E600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EC28u; }
        if (ctx->pc != 0x12EC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgLoadImage__FPUiiiiP1iiiii_0x12e600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EC28u; }
        if (ctx->pc != 0x12EC28u) { return; }
    }
    ctx->pc = 0x12EC28u;
label_12ec28:
    // 0x12ec28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12ec28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12ec2c: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x12ec2cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_12ec30:
    // 0x12ec30: 0x2321018  mult        $v0, $s1, $s2
    ctx->pc = 0x12ec30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x12ec34: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x12ec34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x12ec38: 0x21a03  sra         $v1, $v0, 8
    ctx->pc = 0x12ec38u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 8));
    // 0x12ec3c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12EC3Cu;
    {
        const bool branch_taken_0x12ec3c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x12ec3c) {
            ctx->pc = 0x12EC4Cu;
            goto label_12ec4c;
        }
    }
    ctx->pc = 0x12EC44u;
    // 0x12ec44: 0x244200ff  addiu       $v0, $v0, 0xFF
    ctx->pc = 0x12ec44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 255));
    // 0x12ec48: 0x21a03  sra         $v1, $v0, 8
    ctx->pc = 0x12ec48u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 8));
label_12ec4c:
    // 0x12ec4c: 0x310c3  sra         $v0, $v1, 3
    ctx->pc = 0x12ec4cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
    // 0x12ec50: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12EC50u;
    {
        const bool branch_taken_0x12ec50 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x12ec50) {
            ctx->pc = 0x12EC60u;
            goto label_12ec60;
        }
    }
    ctx->pc = 0x12EC58u;
    // 0x12ec58: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x12ec58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x12ec5c: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x12ec5cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_12ec60:
    // 0x12ec60: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x12ec60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x12ec64: 0x97a400b8  lhu         $a0, 0xB8($sp)
    ctx->pc = 0x12ec64u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12ec68: 0x30823fff  andi        $v0, $a0, 0x3FFF
    ctx->pc = 0x12ec68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16383);
    // 0x12ec6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12ec6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12ec70: 0x30433fff  andi        $v1, $v0, 0x3FFF
    ctx->pc = 0x12ec70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x12ec74: 0x2402c000  addiu       $v0, $zero, -0x4000
    ctx->pc = 0x12ec74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x12ec78: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x12ec78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x12ec7c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12ec7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12ec80: 0xa7a200b8  sh          $v0, 0xB8($sp)
    ctx->pc = 0x12ec80u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 184), (uint16_t)GPR_U32(ctx, 2));
    // 0x12ec84: 0xdfa400b8  ld          $a0, 0xB8($sp)
    ctx->pc = 0x12ec84u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12ec88: 0x4133c  dsll32      $v0, $a0, 12
    ctx->pc = 0x12ec88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 12));
    // 0x12ec8c: 0x216be  dsrl32      $v0, $v0, 26
    ctx->pc = 0x12ec8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 26));
    // 0x12ec90: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x12ec90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x12ec94: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x12ec94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x12ec98: 0x21bb8  dsll        $v1, $v0, 14
    ctx->pc = 0x12ec98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 14);
    // 0x12ec9c: 0x3c02fff0  lui         $v0, 0xFFF0
    ctx->pc = 0x12ec9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65520 << 16));
    // 0x12eca0: 0x34423fff  ori         $v0, $v0, 0x3FFF
    ctx->pc = 0x12eca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16383);
    // 0x12eca4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x12eca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x12eca8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12eca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12ecac: 0xffa200b8  sd          $v0, 0xB8($sp)
    ctx->pc = 0x12ecacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 2));
    // 0x12ecb0: 0x118843  sra         $s1, $s1, 1
    ctx->pc = 0x12ecb0u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
    // 0x12ecb4: 0x129043  sra         $s2, $s2, 1
    ctx->pc = 0x12ecb4u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 1));
    // 0x12ecb8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x12ecb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_12ecbc:
    // 0x12ecbc: 0x0  nop
    ctx->pc = 0x12ecbcu;
    // NOP
    // 0x12ecc0: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x12ecc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x12ecc4: 0x1440ffa5  bnez        $v0, . + 4 + (-0x5B << 2)
    ctx->pc = 0x12ECC4u;
    {
        const bool branch_taken_0x12ecc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ecc4) {
            ctx->pc = 0x12EB5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12eb5c;
        }
    }
    ctx->pc = 0x12ECCCu;
label_12eccc:
    // 0x12eccc: 0x0  nop
    ctx->pc = 0x12ecccu;
    // NOP
    // 0x12ecd0: 0x8e940068  lw          $s4, 0x68($s4)
    ctx->pc = 0x12ecd0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 104)));
    // 0x12ecd4: 0x0  nop
    ctx->pc = 0x12ecd4u;
    // NOP
label_12ecd8:
    // 0x12ecd8: 0x1680ff55  bnez        $s4, . + 4 + (-0xAB << 2)
    ctx->pc = 0x12ECD8u;
    {
        const bool branch_taken_0x12ecd8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ecd8) {
            ctx->pc = 0x12EA30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ea30;
        }
    }
    ctx->pc = 0x12ECE0u;
label_12ece0:
    // 0x12ece0: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x12ECE0u;
    {
        const bool branch_taken_0x12ece0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ece0) {
            ctx->pc = 0x12ED04u;
            goto label_12ed04;
        }
    }
    ctx->pc = 0x12ECE8u;
    // 0x12ece8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12ece8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ecec: 0xc04ba00  jal         func_12E800
    ctx->pc = 0x12ECECu;
    SET_GPR_U32(ctx, 31, 0x12ECF4u);
    ctx->pc = 0x12E800u;
    if (runtime->hasFunction(0x12E800u)) {
        auto targetFn = runtime->lookupFunction(0x12E800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ECF4u; }
        if (ctx->pc != 0x12ECF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTexFlush_TagCnt__FPUi_0x12e800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ECF4u; }
        if (ctx->pc != 0x12ECF4u) { return; }
    }
    ctx->pc = 0x12ECF4u;
label_12ecf4:
    // 0x12ecf4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x12ecf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x12ecf8: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x12ecf8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x12ecfc: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x12ecfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x12ed00: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x12ed00u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_12ed04:
    // 0x12ed04: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x12ed04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x12ed08: 0x2a21023  subu        $v0, $s5, $v0
    ctx->pc = 0x12ed08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x12ed0c: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x12ed0cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
    // 0x12ed10: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12ED10u;
    {
        const bool branch_taken_0x12ed10 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x12ed10) {
            ctx->pc = 0x12ED20u;
            goto label_12ed20;
        }
    }
    ctx->pc = 0x12ED18u;
    // 0x12ed18: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x12ed18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x12ed1c: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x12ed1cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_12ed20:
    // 0x12ed20: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x12ed20u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x12ed24: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12ED24u;
    {
        const bool branch_taken_0x12ed24 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x12ed24) {
            ctx->pc = 0x12ED34u;
            goto label_12ed34;
        }
    }
    ctx->pc = 0x12ED2Cu;
    // 0x12ed2c: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x12ed2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x12ed30: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x12ed30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_12ed34:
    // 0x12ed34: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x12ed34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x12ed38: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x12ed38u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12ed3c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x12ed3cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12ed40: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x12ed40u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12ed44: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x12ed44u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12ed48: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x12ed48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12ed4c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x12ed4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12ed50: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x12ed50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12ed54: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x12ed54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12ed58: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x12ed58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12ed5c: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x12ed5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x12ed60: 0x3e00008  jr          $ra
    ctx->pc = 0x12ED60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12ED68u;
}
