#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawDownLoadAnaunce__Fv
// Address: 0x1f5a30 - 0x1f5cac
void DrawDownLoadAnaunce__Fv_0x1f5a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawDownLoadAnaunce__Fv_0x1f5a30");
#endif

    switch (ctx->pc) {
        case 0x1f5a84u: goto label_1f5a84;
        case 0x1f5a9cu: goto label_1f5a9c;
        case 0x1f5aa4u: goto label_1f5aa4;
        case 0x1f5b94u: goto label_1f5b94;
        case 0x1f5ba8u: goto label_1f5ba8;
        case 0x1f5bf0u: goto label_1f5bf0;
        case 0x1f5c04u: goto label_1f5c04;
        case 0x1f5c28u: goto label_1f5c28;
        case 0x1f5c30u: goto label_1f5c30;
        case 0x1f5c38u: goto label_1f5c38;
        case 0x1f5c40u: goto label_1f5c40;
        case 0x1f5c68u: goto label_1f5c68;
        case 0x1f5c70u: goto label_1f5c70;
        case 0x1f5c88u: goto label_1f5c88;
        default: break;
    }

    ctx->pc = 0x1f5a30u;

    // 0x1f5a30: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x1f5a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x1f5a34: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f5a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1f5a38: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1f5a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1f5a3c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1f5a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1f5a40: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f5a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1f5a44: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f5a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1f5a48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f5a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f5a4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f5a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f5a50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f5a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f5a54: 0x8c2392a0  lw          $v1, -0x6D60($at)
    ctx->pc = 0x1f5a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294939296)));
    // 0x1f5a58: 0x1060008b  beqz        $v1, . + 4 + (0x8B << 2)
    ctx->pc = 0x1F5A58u;
    {
        const bool branch_taken_0x1f5a58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5a58) {
            ctx->pc = 0x1F5C88u;
            goto label_1f5c88;
        }
    }
    ctx->pc = 0x1F5A60u;
    // 0x1f5a60: 0x83838f98  lb          $v1, -0x7068($gp)
    ctx->pc = 0x1f5a60u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938520)));
    // 0x1f5a64: 0x10600088  beqz        $v1, . + 4 + (0x88 << 2)
    ctx->pc = 0x1F5A64u;
    {
        const bool branch_taken_0x1f5a64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5A64u;
            // 0x1f5a68: 0x3c100038  lui         $s0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5a64) {
            ctx->pc = 0x1F5C88u;
            goto label_1f5c88;
        }
    }
    ctx->pc = 0x1F5A6Cu;
    // 0x1f5a6c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1f5a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1f5a70: 0x26101ef0  addiu       $s0, $s0, 0x1EF0
    ctx->pc = 0x1f5a70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
    // 0x1f5a74: 0x24a58a30  addiu       $a1, $a1, -0x75D0
    ctx->pc = 0x1f5a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937136));
    // 0x1f5a78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f5a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5a7c: 0xc04b414  jal         func_12D050
    ctx->pc = 0x1F5A7Cu;
    SET_GPR_U32(ctx, 31, 0x1F5A84u);
    ctx->pc = 0x1F5A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5A7Cu;
            // 0x1f5a80: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5A84u; }
        if (ctx->pc != 0x1F5A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5A84u; }
        if (ctx->pc != 0x1F5A84u) { return; }
    }
    ctx->pc = 0x1F5A84u;
label_1f5a84:
    // 0x1f5a84: 0x10400080  beqz        $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x1F5A84u;
    {
        const bool branch_taken_0x1f5a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5a84) {
            ctx->pc = 0x1F5C88u;
            goto label_1f5c88;
        }
    }
    ctx->pc = 0x1F5A8Cu;
    // 0x1f5a8c: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x1f5a8cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f5a90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f5a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5a94: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x1F5A94u;
    SET_GPR_U32(ctx, 31, 0x1F5A9Cu);
    ctx->pc = 0x1F5A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5A94u;
            // 0x1f5a98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5A9Cu; }
        if (ctx->pc != 0x1F5A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5A9Cu; }
        if (ctx->pc != 0x1F5A9Cu) { return; }
    }
    ctx->pc = 0x1F5A9Cu;
label_1f5a9c:
    // 0x1f5a9c: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x1F5A9Cu;
    SET_GPR_U32(ctx, 31, 0x1F5AA4u);
    ctx->pc = 0x1F5AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5A9Cu;
            // 0x1f5aa0: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5AA4u; }
        if (ctx->pc != 0x1F5AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5AA4u; }
        if (ctx->pc != 0x1F5AA4u) { return; }
    }
    ctx->pc = 0x1F5AA4u;
label_1f5aa4:
    // 0x1f5aa4: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x1f5aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x1f5aa8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f5aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f5aac: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x1f5aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x1f5ab0: 0x3c0901ed  lui         $t1, 0x1ED
    ctx->pc = 0x1f5ab0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)493 << 16));
    // 0x1f5ab4: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x1f5ab4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f5ab8: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x1f5ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1f5abc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1f5abcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1f5ac0: 0x27b30184  addiu       $s3, $sp, 0x184
    ctx->pc = 0x1f5ac0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
    // 0x1f5ac4: 0x27b40188  addiu       $s4, $sp, 0x188
    ctx->pc = 0x1f5ac4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x1f5ac8: 0x27b2018c  addiu       $s2, $sp, 0x18C
    ctx->pc = 0x1f5ac8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
    // 0x1f5acc: 0x25299610  addiu       $t1, $t1, -0x69F0
    ctx->pc = 0x1f5accu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294940176));
    // 0x1f5ad0: 0x27aa0190  addiu       $t2, $sp, 0x190
    ctx->pc = 0x1f5ad0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1f5ad4: 0x27b10194  addiu       $s1, $sp, 0x194
    ctx->pc = 0x1f5ad4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
    // 0x1f5ad8: 0x27b00198  addiu       $s0, $sp, 0x198
    ctx->pc = 0x1f5ad8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
    // 0x1f5adc: 0x27b5019c  addiu       $s5, $sp, 0x19C
    ctx->pc = 0x1f5adcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
    // 0x1f5ae0: 0x27a701b0  addiu       $a3, $sp, 0x1B0
    ctx->pc = 0x1f5ae0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1f5ae4: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1f5ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x1f5ae8: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x1f5ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x1f5aec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f5aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1f5af0: 0x878b8fa0  lh          $t3, -0x7060($gp)
    ctx->pc = 0x1f5af0u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938528)));
    // 0x1f5af4: 0x434025  or          $t0, $v0, $v1
    ctx->pc = 0x1f5af4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1f5af8: 0x27a601b8  addiu       $a2, $sp, 0x1B8
    ctx->pc = 0x1f5af8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
    // 0x1f5afc: 0x87828fa2  lh          $v0, -0x705E($gp)
    ctx->pc = 0x1f5afcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938530)));
    // 0x1f5b00: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f5b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f5b04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f5b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5b08: 0xafab0180  sw          $t3, 0x180($sp)
    ctx->pc = 0x1f5b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 11));
    // 0x1f5b0c: 0x25630005  addiu       $v1, $t3, 0x5
    ctx->pc = 0x1f5b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 5));
    // 0x1f5b10: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1f5b10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1f5b14: 0x878c8fa4  lh          $t4, -0x705C($gp)
    ctx->pc = 0x1f5b14u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938532)));
    // 0x1f5b18: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x1f5b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x1f5b1c: 0xae8c0000  sw          $t4, 0x0($s4)
    ctx->pc = 0x1f5b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 12));
    // 0x1f5b20: 0x878b8fa6  lh          $t3, -0x705A($gp)
    ctx->pc = 0x1f5b20u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938534)));
    // 0x1f5b24: 0xae4b0000  sw          $t3, 0x0($s2)
    ctx->pc = 0x1f5b24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 11));
    // 0x1f5b28: 0x79290000  lq          $t1, 0x0($t1)
    ctx->pc = 0x1f5b28u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1f5b2c: 0x7d490000  sq          $t1, 0x0($t2)
    ctx->pc = 0x1f5b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 9));
    // 0x1f5b30: 0xafa30190  sw          $v1, 0x190($sp)
    ctx->pc = 0x1f5b30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 3));
    // 0x1f5b34: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1f5b34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1f5b38: 0xae0c0000  sw          $t4, 0x0($s0)
    ctx->pc = 0x1f5b38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 12));
    // 0x1f5b3c: 0xaeab0000  sw          $t3, 0x0($s5)
    ctx->pc = 0x1f5b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 11));
    // 0x1f5b40: 0xdf8281a0  ld          $v0, -0x7E60($gp)
    ctx->pc = 0x1f5b40u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294934944)));
    // 0x1f5b44: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x1f5b44u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x1f5b48: 0x8f828fb4  lw          $v0, -0x704C($gp)
    ctx->pc = 0x1f5b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938548)));
    // 0x1f5b4c: 0xdfaa01b0  ld          $t2, 0x1B0($sp)
    ctx->pc = 0x1f5b4cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1f5b50: 0xdf839068  ld          $v1, -0x6F98($gp)
    ctx->pc = 0x1f5b50u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294938728)));
    // 0x1f5b54: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x1f5b54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f5b58: 0x74e38  dsll        $t1, $a3, 24
    ctx->pc = 0x1f5b58u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) << 24);
    // 0x1f5b5c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1f5b5cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1f5b60: 0x1483824  and         $a3, $t2, $t0
    ctx->pc = 0x1f5b60u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x1f5b64: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1f5b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1f5b68: 0xe93825  or          $a3, $a3, $t1
    ctx->pc = 0x1f5b68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x1f5b6c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1f5b6cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1f5b70: 0xffa701b0  sd          $a3, 0x1B0($sp)
    ctx->pc = 0x1f5b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 7));
    // 0x1f5b74: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f5b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f5b78: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x1f5b78u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x1f5b7c: 0x21e38  dsll        $v1, $v0, 24
    ctx->pc = 0x1f5b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 24);
    // 0x1f5b80: 0xdfa201b8  ld          $v0, 0x1B8($sp)
    ctx->pc = 0x1f5b80u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x1f5b84: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x1f5b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x1f5b88: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1f5b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1f5b8c: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x1F5B8Cu;
    SET_GPR_U32(ctx, 31, 0x1F5B94u);
    ctx->pc = 0x1F5B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5B8Cu;
            // 0x1f5b90: 0xffa201b8  sd          $v0, 0x1B8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 440), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5B94u; }
        if (ctx->pc != 0x1F5B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5B94u; }
        if (ctx->pc != 0x1F5B94u) { return; }
    }
    ctx->pc = 0x1F5B94u;
label_1f5b94:
    // 0x1f5b94: 0x93a701bb  lbu         $a3, 0x1BB($sp)
    ctx->pc = 0x1f5b94u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 443)));
    // 0x1f5b98: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f5b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f5b9c: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x1f5b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1f5ba0: 0xc0b5d0c  jal         func_2D7430
    ctx->pc = 0x1F5BA0u;
    SET_GPR_U32(ctx, 31, 0x1F5BA8u);
    ctx->pc = 0x1F5BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5BA0u;
            // 0x1f5ba4: 0x27a601b8  addiu       $a2, $sp, 0x1B8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D7430u;
    if (runtime->hasFunction(0x2D7430u)) {
        auto targetFn = runtime->lookupFunction(0x2D7430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5BA8u; }
        if (ctx->pc != 0x1F5BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawVersatileWin_1__FP11mgCDrawPrim4RECTP10RGBAQ_TYPEi_0x2d7430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5BA8u; }
        if (ctx->pc != 0x1F5BA8u) { return; }
    }
    ctx->pc = 0x1F5BA8u;
label_1f5ba8:
    // 0x1f5ba8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1f5ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5bac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1f5bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f5bb0: 0xc7a10190  lwc1        $f1, 0x190($sp)
    ctx->pc = 0x1f5bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5bb4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1f5bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1f5bb8: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1f5bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1f5bbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f5bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5bc0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f5bc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5bc4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f5bc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5bc8: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x1f5bc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x1f5bcc: 0x2463fff6  addiu       $v1, $v1, -0xA
    ctx->pc = 0x1f5bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
    // 0x1f5bd0: 0x2442fff6  addiu       $v0, $v0, -0xA
    ctx->pc = 0x1f5bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
    // 0x1f5bd4: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1f5bd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1f5bd8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f5bd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f5bdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f5bdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f5be0: 0x0  nop
    ctx->pc = 0x1f5be0u;
    // NOP
    // 0x1f5be4: 0x46800ba0  cvt.s.w     $f14, $f1
    ctx->pc = 0x1f5be4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x1f5be8: 0xc0887b8  jal         func_221EE0
    ctx->pc = 0x1F5BE8u;
    SET_GPR_U32(ctx, 31, 0x1F5BF0u);
    ctx->pc = 0x1F5BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5BE8u;
            // 0x1f5bec: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x221EE0u;
    if (runtime->hasFunction(0x221EE0u)) {
        auto targetFn = runtime->lookupFunction(0x221EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5BF0u; }
        if (ctx->pc != 0x1F5BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuFillBox__Fffffiiii_0x221ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5BF0u; }
        if (ctx->pc != 0x1F5BF0u) { return; }
    }
    ctx->pc = 0x1F5BF0u;
label_1f5bf0:
    // 0x1f5bf0: 0x93a701b3  lbu         $a3, 0x1B3($sp)
    ctx->pc = 0x1f5bf0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 435)));
    // 0x1f5bf4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f5bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f5bf8: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x1f5bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1f5bfc: 0xc0b5d0c  jal         func_2D7430
    ctx->pc = 0x1F5BFCu;
    SET_GPR_U32(ctx, 31, 0x1F5C04u);
    ctx->pc = 0x1F5C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5BFCu;
            // 0x1f5c00: 0x27a601b0  addiu       $a2, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D7430u;
    if (runtime->hasFunction(0x2D7430u)) {
        auto targetFn = runtime->lookupFunction(0x2D7430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5C04u; }
        if (ctx->pc != 0x1F5C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawVersatileWin_1__FP11mgCDrawPrim4RECTP10RGBAQ_TYPEi_0x2d7430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5C04u; }
        if (ctx->pc != 0x1F5C04u) { return; }
    }
    ctx->pc = 0x1F5C04u;
label_1f5c04:
    // 0x1f5c04: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x1f5c04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1f5c08: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x1f5c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1f5c0c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1f5c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f5c10: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1f5c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1f5c14: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x1f5c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1f5c18: 0x24e60011  addiu       $a2, $a3, 0x11
    ctx->pc = 0x1f5c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 17));
    // 0x1f5c1c: 0xe24021  addu        $t0, $a3, $v0
    ctx->pc = 0x1f5c1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1f5c20: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F5C20u;
    SET_GPR_U32(ctx, 31, 0x1F5C28u);
    ctx->pc = 0x1F5C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5C20u;
            // 0x1f5c24: 0xa33821  addu        $a3, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5C28u; }
        if (ctx->pc != 0x1F5C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5C28u; }
        if (ctx->pc != 0x1F5C28u) { return; }
    }
    ctx->pc = 0x1F5C28u;
label_1f5c28:
    // 0x1f5c28: 0xc088038  jal         func_2200E0
    ctx->pc = 0x1F5C28u;
    SET_GPR_U32(ctx, 31, 0x1F5C30u);
    ctx->pc = 0x1F5C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5C28u;
            // 0x1f5c2c: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2200E0u;
    if (runtime->hasFunction(0x2200E0u)) {
        auto targetFn = runtime->lookupFunction(0x2200E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5C30u; }
        if (ctx->pc != 0x1F5C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuClipRectCheck__FR9mgRect_i__0x2200e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5C30u; }
        if (ctx->pc != 0x1F5C30u) { return; }
    }
    ctx->pc = 0x1F5C30u;
label_1f5c30:
    // 0x1f5c30: 0xc088050  jal         func_220140
    ctx->pc = 0x1F5C30u;
    SET_GPR_U32(ctx, 31, 0x1F5C38u);
    ctx->pc = 0x1F5C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5C30u;
            // 0x1f5c34: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220140u;
    if (runtime->hasFunction(0x220140u)) {
        auto targetFn = runtime->lookupFunction(0x220140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5C38u; }
        if (ctx->pc != 0x1F5C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMenuScissor__F9mgRect_i__0x220140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5C38u; }
        if (ctx->pc != 0x1F5C38u) { return; }
    }
    ctx->pc = 0x1F5C38u;
label_1f5c38:
    // 0x1f5c38: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f5c38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5c3c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f5c3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5c40:
    // 0x1f5c40: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x1f5c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x1f5c44: 0x244292a0  addiu       $v0, $v0, -0x6D60
    ctx->pc = 0x1f5c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939296));
    // 0x1f5c48: 0x519021  addu        $s2, $v0, $s1
    ctx->pc = 0x1f5c48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1f5c4c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1f5c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f5c50: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F5C50u;
    {
        const bool branch_taken_0x1f5c50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5c50) {
            ctx->pc = 0x1F5C70u;
            goto label_1f5c70;
        }
    }
    ctx->pc = 0x1F5C58u;
    // 0x1f5c58: 0x83828fb4  lb          $v0, -0x704C($gp)
    ctx->pc = 0x1f5c58u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938548)));
    // 0x1f5c5c: 0xa0621800  sb          $v0, 0x1800($v1)
    ctx->pc = 0x1f5c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6144), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f5c60: 0xc054ee8  jal         func_153BA0
    ctx->pc = 0x1F5C60u;
    SET_GPR_U32(ctx, 31, 0x1F5C68u);
    ctx->pc = 0x1F5C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5C60u;
            // 0x1f5c64: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153BA0u;
    if (runtime->hasFunction(0x153BA0u)) {
        auto targetFn = runtime->lookupFunction(0x153BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5C68u; }
        if (ctx->pc != 0x1F5C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__6ClsMesFv_0x153ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5C68u; }
        if (ctx->pc != 0x1F5C68u) { return; }
    }
    ctx->pc = 0x1F5C68u;
label_1f5c68:
    // 0x1f5c68: 0xc056cb0  jal         func_15B2C0
    ctx->pc = 0x1F5C68u;
    SET_GPR_U32(ctx, 31, 0x1F5C70u);
    ctx->pc = 0x1F5C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5C68u;
            // 0x1f5c6c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B2C0u;
    if (runtime->hasFunction(0x15B2C0u)) {
        auto targetFn = runtime->lookupFunction(0x15B2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5C70u; }
        if (ctx->pc != 0x1F5C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMesWin__6ClsMesFv_0x15b2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5C70u; }
        if (ctx->pc != 0x1F5C70u) { return; }
    }
    ctx->pc = 0x1F5C70u;
label_1f5c70:
    // 0x1f5c70: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f5c70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f5c74: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x1f5c74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1f5c78: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1F5C78u;
    {
        const bool branch_taken_0x1f5c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5C78u;
            // 0x1f5c7c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5c78) {
            ctx->pc = 0x1F5C40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f5c40;
        }
    }
    ctx->pc = 0x1F5C80u;
    // 0x1f5c80: 0xc088070  jal         func_2201C0
    ctx->pc = 0x1F5C80u;
    SET_GPR_U32(ctx, 31, 0x1F5C88u);
    ctx->pc = 0x2201C0u;
    if (runtime->hasFunction(0x2201C0u)) {
        auto targetFn = runtime->lookupFunction(0x2201C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5C88u; }
        if (ctx->pc != 0x1F5C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMenuScissor__Fv_0x2201c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5C88u; }
        if (ctx->pc != 0x1F5C88u) { return; }
    }
    ctx->pc = 0x1F5C88u;
label_1f5c88:
    // 0x1f5c88: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1f5c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f5c8c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1f5c8cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f5c90: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f5c90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f5c94: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f5c94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f5c98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f5c98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f5c9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f5c9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f5ca0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f5ca0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5CA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5CA4u;
            // 0x1f5ca8: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F5CACu;
}
