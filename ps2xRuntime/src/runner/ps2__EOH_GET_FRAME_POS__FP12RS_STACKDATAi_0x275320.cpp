#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _EOH_GET_FRAME_POS__FP12RS_STACKDATAi
// Address: 0x275320 - 0x27539c
void ps2__EOH_GET_FRAME_POS__FP12RS_STACKDATAi_0x275320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__EOH_GET_FRAME_POS__FP12RS_STACKDATAi_0x275320");
#endif

    switch (ctx->pc) {
        case 0x275334u: goto label_275334;
        case 0x275344u: goto label_275344;
        case 0x275358u: goto label_275358;
        case 0x275370u: goto label_275370;
        case 0x275380u: goto label_275380;
        case 0x27538cu: goto label_27538c;
        default: break;
    }

    ctx->pc = 0x275320u;

    // 0x275320: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x275320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x275324: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x275324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x275328: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x275328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27532c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27532Cu;
    SET_GPR_U32(ctx, 31, 0x275334u);
    ctx->pc = 0x275330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27532Cu;
            // 0x275330: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275334u; }
        if (ctx->pc != 0x275334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275334u; }
        if (ctx->pc != 0x275334u) { return; }
    }
    ctx->pc = 0x275334u;
label_275334:
    // 0x275334: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x275334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275338: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x275338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27533c: 0xc097e48  jal         func_25F920
    ctx->pc = 0x27533Cu;
    SET_GPR_U32(ctx, 31, 0x275344u);
    ctx->pc = 0x275340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27533Cu;
            // 0x275340: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275344u; }
        if (ctx->pc != 0x275344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275344u; }
        if (ctx->pc != 0x275344u) { return; }
    }
    ctx->pc = 0x275344u;
label_275344:
    // 0x275344: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x275344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x275348: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x275348u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27534c: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x27534cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
    // 0x275350: 0xc097cd0  jal         func_25F340
    ctx->pc = 0x275350u;
    SET_GPR_U32(ctx, 31, 0x275358u);
    ctx->pc = 0x275354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275350u;
            // 0x275354: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F340u;
    if (runtime->hasFunction(0x25F340u)) {
        auto targetFn = runtime->lookupFunction(0x25F340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275358u; }
        if (ctx->pc != 0x275358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFramePos__10CEohMotherFiPcPf_0x25f340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275358u; }
        if (ctx->pc != 0x275358u) { return; }
    }
    ctx->pc = 0x275358u;
label_275358:
    // 0x275358: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x275358u;
    {
        const bool branch_taken_0x275358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x275358) {
            ctx->pc = 0x27538Cu;
            goto label_27538c;
        }
    }
    ctx->pc = 0x275360u;
    // 0x275360: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x275360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x275364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x275364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275368: 0xc097e54  jal         func_25F950
    ctx->pc = 0x275368u;
    SET_GPR_U32(ctx, 31, 0x275370u);
    ctx->pc = 0x27536Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275368u;
            // 0x27536c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275370u; }
        if (ctx->pc != 0x275370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275370u; }
        if (ctx->pc != 0x275370u) { return; }
    }
    ctx->pc = 0x275370u;
label_275370:
    // 0x275370: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x275370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x275374: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x275374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275378: 0xc097e54  jal         func_25F950
    ctx->pc = 0x275378u;
    SET_GPR_U32(ctx, 31, 0x275380u);
    ctx->pc = 0x27537Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275378u;
            // 0x27537c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275380u; }
        if (ctx->pc != 0x275380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275380u; }
        if (ctx->pc != 0x275380u) { return; }
    }
    ctx->pc = 0x275380u;
label_275380:
    // 0x275380: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x275380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x275384: 0xc097e54  jal         func_25F950
    ctx->pc = 0x275384u;
    SET_GPR_U32(ctx, 31, 0x27538Cu);
    ctx->pc = 0x275388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275384u;
            // 0x275388: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27538Cu; }
        if (ctx->pc != 0x27538Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27538Cu; }
        if (ctx->pc != 0x27538Cu) { return; }
    }
    ctx->pc = 0x27538Cu;
label_27538c:
    // 0x27538c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27538cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275390: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x275390u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275394: 0x3e00008  jr          $ra
    ctx->pc = 0x275394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275394u;
            // 0x275398: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27539Cu;
}
