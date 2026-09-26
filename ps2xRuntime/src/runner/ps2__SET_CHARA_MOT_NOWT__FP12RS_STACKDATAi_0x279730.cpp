#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_CHARA_MOT_NOWT__FP12RS_STACKDATAi
// Address: 0x279730 - 0x27978c
void ps2__SET_CHARA_MOT_NOWT__FP12RS_STACKDATAi_0x279730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_CHARA_MOT_NOWT__FP12RS_STACKDATAi_0x279730");
#endif

    switch (ctx->pc) {
        case 0x279748u: goto label_279748;
        case 0x279754u: goto label_279754;
        case 0x279760u: goto label_279760;
        default: break;
    }

    ctx->pc = 0x279730u;

    // 0x279730: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x279730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x279734: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x279734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x279738: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x279738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27973c: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x27973cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x279740: 0xc097e18  jal         func_25F860
    ctx->pc = 0x279740u;
    SET_GPR_U32(ctx, 31, 0x279748u);
    ctx->pc = 0x279744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279740u;
            // 0x279744: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279748u; }
        if (ctx->pc != 0x279748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279748u; }
        if (ctx->pc != 0x279748u) { return; }
    }
    ctx->pc = 0x279748u;
label_279748:
    // 0x279748: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x279748u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27974c: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x27974Cu;
    SET_GPR_U32(ctx, 31, 0x279754u);
    ctx->pc = 0x279750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27974Cu;
            // 0x279750: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279754u; }
        if (ctx->pc != 0x279754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279754u; }
        if (ctx->pc != 0x279754u) { return; }
    }
    ctx->pc = 0x279754u;
label_279754:
    // 0x279754: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x279754u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x279758: 0xc0956d4  jal         func_255B50
    ctx->pc = 0x279758u;
    SET_GPR_U32(ctx, 31, 0x279760u);
    ctx->pc = 0x27975Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279758u;
            // 0x27975c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255B50u;
    if (runtime->hasFunction(0x255B50u)) {
        auto targetFn = runtime->lookupFunction(0x255B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279760u; }
        if (ctx->pc != 0x279760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__Fi_0x255b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279760u; }
        if (ctx->pc != 0x279760u) { return; }
    }
    ctx->pc = 0x279760u;
label_279760:
    // 0x279760: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x279760u;
    {
        const bool branch_taken_0x279760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x279760) {
            ctx->pc = 0x279770u;
            goto label_279770;
        }
    }
    ctx->pc = 0x279768u;
    // 0x279768: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x279768u;
    {
        const bool branch_taken_0x279768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27976Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279768u;
            // 0x27976c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279768) {
            ctx->pc = 0x279778u;
            goto label_279778;
        }
    }
    ctx->pc = 0x279770u;
label_279770:
    // 0x279770: 0xe4540388  swc1        $f20, 0x388($v0)
    ctx->pc = 0x279770u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 904), bits); }
    // 0x279774: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x279774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_279778:
    // 0x279778: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x279778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27977c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x27977cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x279780: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x279780u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279784: 0x3e00008  jr          $ra
    ctx->pc = 0x279784u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279784u;
            // 0x279788: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27978Cu;
}
