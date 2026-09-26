#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __fixdfdi
// Address: 0x286768 - 0x2867c4
void ps2___fixdfdi_0x286768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___fixdfdi_0x286768");
#endif

    switch (ctx->pc) {
        case 0x286788u: goto label_286788;
        case 0x286798u: goto label_286798;
        case 0x2867a0u: goto label_2867a0;
        case 0x2867b0u: goto label_2867b0;
        default: break;
    }

    ctx->pc = 0x286768u;

    // 0x286768: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x286768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28676c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28676cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x286770: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x286770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x286774: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x286774u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286778: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x286778u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28677c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28677cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x286780: 0xc0a2148  jal         func_288520
    ctx->pc = 0x286780u;
    SET_GPR_U32(ctx, 31, 0x286788u);
    ctx->pc = 0x286784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286780u;
            // 0x286784: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288520u;
    if (runtime->hasFunction(0x288520u)) {
        auto targetFn = runtime->lookupFunction(0x288520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286788u; }
        if (ctx->pc != 0x286788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x288520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286788u; }
        if (ctx->pc != 0x286788u) { return; }
    }
    ctx->pc = 0x286788u;
label_286788:
    // 0x286788: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x286788u;
    {
        const bool branch_taken_0x286788 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x28678Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286788u;
            // 0x28678c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286788) {
            ctx->pc = 0x2867A8u;
            goto label_2867a8;
        }
    }
    ctx->pc = 0x286790u;
    // 0x286790: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x286790u;
    SET_GPR_U32(ctx, 31, 0x286798u);
    ctx->pc = 0x286794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286790u;
            // 0x286794: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286798u; }
        if (ctx->pc != 0x286798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286798u; }
        if (ctx->pc != 0x286798u) { return; }
    }
    ctx->pc = 0x286798u;
label_286798:
    // 0x286798: 0xc0a19f2  jal         func_2867C8
    ctx->pc = 0x286798u;
    SET_GPR_U32(ctx, 31, 0x2867A0u);
    ctx->pc = 0x28679Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286798u;
            // 0x28679c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2867C8u;
    if (runtime->hasFunction(0x2867C8u)) {
        auto targetFn = runtime->lookupFunction(0x2867C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2867A0u; }
        if (ctx->pc != 0x2867A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___fixunsdfdi_0x2867c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2867A0u; }
        if (ctx->pc != 0x2867A0u) { return; }
    }
    ctx->pc = 0x2867A0u;
label_2867a0:
    // 0x2867a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2867A0u;
    {
        const bool branch_taken_0x2867a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2867A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2867A0u;
            // 0x2867a4: 0x2102f  dsubu       $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2867a0) {
            ctx->pc = 0x2867B0u;
            goto label_2867b0;
        }
    }
    ctx->pc = 0x2867A8u;
label_2867a8:
    // 0x2867a8: 0xc0a19f2  jal         func_2867C8
    ctx->pc = 0x2867A8u;
    SET_GPR_U32(ctx, 31, 0x2867B0u);
    ctx->pc = 0x2867ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2867A8u;
            // 0x2867ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2867C8u;
    if (runtime->hasFunction(0x2867C8u)) {
        auto targetFn = runtime->lookupFunction(0x2867C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2867B0u; }
        if (ctx->pc != 0x2867B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___fixunsdfdi_0x2867c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2867B0u; }
        if (ctx->pc != 0x2867B0u) { return; }
    }
    ctx->pc = 0x2867B0u;
label_2867b0:
    // 0x2867b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2867b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2867b4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2867b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2867b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2867b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2867bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2867BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2867C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2867BCu;
            // 0x2867c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2867C4u;
}
