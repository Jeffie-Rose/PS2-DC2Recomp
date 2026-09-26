#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreateRenderInfoPacket__13mgCVisualPrimFPUiPA4_fP13mgRENDER_INFO
// Address: 0x141090 - 0x1411ac
void CreateRenderInfoPacket__13mgCVisualPrimFPUiPA4_fP13mgRENDER_INFO_0x141090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateRenderInfoPacket__13mgCVisualPrimFPUiPA4_fP13mgRENDER_INFO_0x141090");
#endif

    switch (ctx->pc) {
        case 0x1410bcu: goto label_1410bc;
        case 0x141138u: goto label_141138;
        case 0x141150u: goto label_141150;
        case 0x141188u: goto label_141188;
        default: break;
    }

    ctx->pc = 0x141090u;

    // 0x141090: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x141090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x141094: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x141094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x141098: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x141098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14109c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14109cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1410a0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1410a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1410a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1410a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1410a8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1410a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1410ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1410acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1410b0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1410b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1410b4: 0xc04f8ec  jal         func_13E3B0
    ctx->pc = 0x1410B4u;
    SET_GPR_U32(ctx, 31, 0x1410BCu);
    ctx->pc = 0x1410B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1410B4u;
            // 0x1410b8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E3B0u;
    if (runtime->hasFunction(0x13E3B0u)) {
        auto targetFn = runtime->lookupFunction(0x13E3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1410BCu; }
        if (ctx->pc != 0x1410BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetScrPad__Fv_0x13e3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1410BCu; }
        if (ctx->pc != 0x1410BCu) { return; }
    }
    ctx->pc = 0x1410BCu;
label_1410bc:
    // 0x1410bc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1410bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1410c0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1410c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1410c4: 0x34640007  ori         $a0, $v1, 0x7
    ctx->pc = 0x1410c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)7);
    // 0x1410c8: 0x7ca00000  sq          $zero, 0x0($a1)
    ctx->pc = 0x1410c8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 0));
    // 0x1410cc: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x1410ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x1410d0: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x1410d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x1410d4: 0x34630007  ori         $v1, $v1, 0x7
    ctx->pc = 0x1410d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)7);
    // 0x1410d8: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x1410d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x1410dc: 0xafa3006c  sw          $v1, 0x6C($sp)
    ctx->pc = 0x1410dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 3));
    // 0x1410e0: 0x34078002  ori         $a3, $zero, 0x8002
    ctx->pc = 0x1410e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    // 0x1410e4: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x1410e4u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1410e8: 0x24430020  addiu       $v1, $v0, 0x20
    ctx->pc = 0x1410e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1410ec: 0x24710020  addiu       $s1, $v1, 0x20
    ctx->pc = 0x1410ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1410f0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1410f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1410f4: 0x24c64120  addiu       $a2, $a2, 0x4120
    ctx->pc = 0x1410f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16672));
    // 0x1410f8: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x1410f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1410fc: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x1410fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x141100: 0x7c480000  sq          $t0, 0x0($v0)
    ctx->pc = 0x141100u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 8));
    // 0x141104: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x141104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141108: 0xac274120  sw          $a3, 0x4120($at)
    ctx->pc = 0x141108u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16672), GPR_U32(ctx, 7));
    // 0x14110c: 0x78c60000  lq          $a2, 0x0($a2)
    ctx->pc = 0x14110cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x141110: 0x7c460010  sq          $a2, 0x10($v0)
    ctx->pc = 0x141110u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 6));
    // 0x141114: 0xfc450020  sd          $a1, 0x20($v0)
    ctx->pc = 0x141114u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 5));
    // 0x141118: 0xfc440028  sd          $a0, 0x28($v0)
    ctx->pc = 0x141118u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 4));
    // 0x14111c: 0xfc400030  sd          $zero, 0x30($v0)
    ctx->pc = 0x14111cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 48), GPR_U64(ctx, 0));
    // 0x141120: 0xfc430038  sd          $v1, 0x38($v0)
    ctx->pc = 0x141120u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 56), GPR_U64(ctx, 3));
    // 0x141124: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x141124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x141128: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x141128u;
    {
        const bool branch_taken_0x141128 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x14112Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141128u;
            // 0x14112c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141128) {
            ctx->pc = 0x141140u;
            goto label_141140;
        }
    }
    ctx->pc = 0x141130u;
    // 0x141130: 0xc04e220  jal         func_138880
    ctx->pc = 0x141130u;
    SET_GPR_U32(ctx, 31, 0x141138u);
    ctx->pc = 0x141134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141130u;
            // 0x141134: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138880u;
    if (runtime->hasFunction(0x138880u)) {
        auto targetFn = runtime->lookupFunction(0x138880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141138u; }
        if (ctx->pc != 0x141138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__10mgCDrawEnvFR10mgCDrawEnv_0x138880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141138u; }
        if (ctx->pc != 0x141138u) { return; }
    }
    ctx->pc = 0x141138u;
label_141138:
    // 0x141138: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x141138u;
    {
        const bool branch_taken_0x141138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14113Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141138u;
            // 0x14113c: 0x3c036000  lui         $v1, 0x6000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24576 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141138) {
            ctx->pc = 0x141154u;
            goto label_141154;
        }
    }
    ctx->pc = 0x141140u;
label_141140:
    // 0x141140: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x141140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x141144: 0x26460f20  addiu       $a2, $s2, 0xF20
    ctx->pc = 0x141144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 3872));
    // 0x141148: 0xc050388  jal         func_140E20
    ctx->pc = 0x141148u;
    SET_GPR_U32(ctx, 31, 0x141150u);
    ctx->pc = 0x14114Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141148u;
            // 0x14114c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140E20u;
    if (runtime->hasFunction(0x140E20u)) {
        auto targetFn = runtime->lookupFunction(0x140E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141150u; }
        if (ctx->pc != 0x141150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDrawEnv__FP10mgCDrawEnvP13mgCVisualAttrP10mgCDrawEnv_0x140e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141150u; }
        if (ctx->pc != 0x141150u) { return; }
    }
    ctx->pc = 0x141150u;
label_141150:
    // 0x141150: 0x3c036000  lui         $v1, 0x6000
    ctx->pc = 0x141150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24576 << 16));
label_141154:
    // 0x141154: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x141154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x141158: 0xae230040  sw          $v1, 0x40($s1)
    ctx->pc = 0x141158u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 3));
    // 0x14115c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x14115cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x141160: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x141160u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
    // 0x141164: 0x28103  sra         $s0, $v0, 4
    ctx->pc = 0x141164u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 4));
    // 0x141168: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x141168u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
    // 0x14116c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14116Cu;
    {
        const bool branch_taken_0x14116c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x141170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14116Cu;
            // 0x141170: 0xae20004c  sw          $zero, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14116c) {
            ctx->pc = 0x14117Cu;
            goto label_14117c;
        }
    }
    ctx->pc = 0x141174u;
    // 0x141174: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x141174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x141178: 0x28103  sra         $s0, $v0, 4
    ctx->pc = 0x141178u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 4));
label_14117c:
    // 0x14117c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14117cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141180: 0xc04f8f4  jal         func_13E3D0
    ctx->pc = 0x141180u;
    SET_GPR_U32(ctx, 31, 0x141188u);
    ctx->pc = 0x141184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141180u;
            // 0x141184: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E3D0u;
    if (runtime->hasFunction(0x13E3D0u)) {
        auto targetFn = runtime->lookupFunction(0x13E3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141188u; }
        if (ctx->pc != 0x141188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SendDMA__FPvi_0x13e3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141188u; }
        if (ctx->pc != 0x141188u) { return; }
    }
    ctx->pc = 0x141188u;
label_141188:
    // 0x141188: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x141188u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14118c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x14118cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x141190: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x141190u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x141194: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x141194u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x141198: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x141198u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14119c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14119cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1411a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1411a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1411a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1411A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1411A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1411A4u;
            // 0x1411a8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1411ACu;
}
