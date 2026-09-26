#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _OBJS_ATTACH_CAMERA__FP12RS_STACKDATAi
// Address: 0x2714e0 - 0x271558
void ps2__OBJS_ATTACH_CAMERA__FP12RS_STACKDATAi_0x2714e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__OBJS_ATTACH_CAMERA__FP12RS_STACKDATAi_0x2714e0");
#endif

    switch (ctx->pc) {
        case 0x2714fcu: goto label_2714fc;
        case 0x27150cu: goto label_27150c;
        case 0x271518u: goto label_271518;
        case 0x271524u: goto label_271524;
        case 0x27153cu: goto label_27153c;
        default: break;
    }

    ctx->pc = 0x2714e0u;

    // 0x2714e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2714e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2714e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2714e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2714e8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2714e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2714ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2714ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2714f0: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x2714f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2714f4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2714F4u;
    SET_GPR_U32(ctx, 31, 0x2714FCu);
    ctx->pc = 0x2714F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2714F4u;
            // 0x2714f8: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2714FCu; }
        if (ctx->pc != 0x2714FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2714FCu; }
        if (ctx->pc != 0x2714FCu) { return; }
    }
    ctx->pc = 0x2714FCu;
label_2714fc:
    // 0x2714fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2714fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271500: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x271500u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271504: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x271504u;
    SET_GPR_U32(ctx, 31, 0x27150Cu);
    ctx->pc = 0x271508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271504u;
            // 0x271508: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27150Cu; }
        if (ctx->pc != 0x27150Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27150Cu; }
        if (ctx->pc != 0x27150Cu) { return; }
    }
    ctx->pc = 0x27150Cu;
label_27150c:
    // 0x27150c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x27150cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x271510: 0xc097e18  jal         func_25F860
    ctx->pc = 0x271510u;
    SET_GPR_U32(ctx, 31, 0x271518u);
    ctx->pc = 0x271514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271510u;
            // 0x271514: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271518u; }
        if (ctx->pc != 0x271518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271518u; }
        if (ctx->pc != 0x271518u) { return; }
    }
    ctx->pc = 0x271518u;
label_271518:
    // 0x271518: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x271518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27151c: 0xc098a44  jal         func_262910
    ctx->pc = 0x27151Cu;
    SET_GPR_U32(ctx, 31, 0x271524u);
    ctx->pc = 0x271520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27151Cu;
            // 0x271520: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262910u;
    if (runtime->hasFunction(0x262910u)) {
        auto targetFn = runtime->lookupFunction(0x262910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271524u; }
        if (ctx->pc != 0x271524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetObjSeq__Fi_0x262910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271524u; }
        if (ctx->pc != 0x271524u) { return; }
    }
    ctx->pc = 0x271524u;
label_271524:
    // 0x271524: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x271524u;
    {
        const bool branch_taken_0x271524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271524u;
            // 0x271528: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271524) {
            ctx->pc = 0x271534u;
            goto label_271534;
        }
    }
    ctx->pc = 0x27152Cu;
    // 0x27152c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27152Cu;
    {
        const bool branch_taken_0x27152c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27152Cu;
            // 0x271530: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27152c) {
            ctx->pc = 0x271540u;
            goto label_271540;
        }
    }
    ctx->pc = 0x271534u;
label_271534:
    // 0x271534: 0xc097334  jal         func_25CCD0
    ctx->pc = 0x271534u;
    SET_GPR_U32(ctx, 31, 0x27153Cu);
    ctx->pc = 0x271538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271534u;
            // 0x271538: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CCD0u;
    if (runtime->hasFunction(0x25CCD0u)) {
        auto targetFn = runtime->lookupFunction(0x25CCD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27153Cu; }
        if (ctx->pc != 0x27153Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachCamera__12CSceneObjSeqFfi_0x25ccd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27153Cu; }
        if (ctx->pc != 0x27153Cu) { return; }
    }
    ctx->pc = 0x27153Cu;
label_27153c:
    // 0x27153c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27153cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_271540:
    // 0x271540: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x271540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x271544: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x271544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x271548: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x271548u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27154c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27154cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x271550: 0x3e00008  jr          $ra
    ctx->pc = 0x271550u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271550u;
            // 0x271554: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x271558u;
}
