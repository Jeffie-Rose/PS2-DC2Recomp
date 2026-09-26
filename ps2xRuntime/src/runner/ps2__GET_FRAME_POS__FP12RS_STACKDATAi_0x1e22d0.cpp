#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_FRAME_POS__FP12RS_STACKDATAi
// Address: 0x1e22d0 - 0x1e235c
void ps2__GET_FRAME_POS__FP12RS_STACKDATAi_0x1e22d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_FRAME_POS__FP12RS_STACKDATAi_0x1e22d0");
#endif

    switch (ctx->pc) {
        case 0x1e22e4u: goto label_1e22e4;
        case 0x1e2304u: goto label_1e2304;
        case 0x1e231cu: goto label_1e231c;
        case 0x1e232cu: goto label_1e232c;
        case 0x1e233cu: goto label_1e233c;
        case 0x1e2348u: goto label_1e2348;
        default: break;
    }

    ctx->pc = 0x1e22d0u;

    // 0x1e22d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e22d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e22d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e22d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e22d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e22d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e22dc: 0xc0781b8  jal         func_1E06E0
    ctx->pc = 0x1E22DCu;
    SET_GPR_U32(ctx, 31, 0x1E22E4u);
    ctx->pc = 0x1E22E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E22DCu;
            // 0x1e22e0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06E0u;
    if (runtime->hasFunction(0x1E06E0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E22E4u; }
        if (ctx->pc != 0x1E22E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x1e06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E22E4u; }
        if (ctx->pc != 0x1E22E4u) { return; }
    }
    ctx->pc = 0x1E22E4u;
label_1e22e4:
    // 0x1e22e4: 0x8f838e70  lw          $v1, -0x7190($gp)
    ctx->pc = 0x1e22e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e22e8: 0x8c640070  lw          $a0, 0x70($v1)
    ctx->pc = 0x1e22e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x1e22ec: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E22ECu;
    {
        const bool branch_taken_0x1e22ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E22F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E22ECu;
            // 0x1e22f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e22ec) {
            ctx->pc = 0x1E22FCu;
            goto label_1e22fc;
        }
    }
    ctx->pc = 0x1E22F4u;
    // 0x1e22f4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1E22F4u;
    {
        const bool branch_taken_0x1e22f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E22F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E22F4u;
            // 0x1e22f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e22f4) {
            ctx->pc = 0x1E234Cu;
            goto label_1e234c;
        }
    }
    ctx->pc = 0x1E22FCu;
label_1e22fc:
    // 0x1e22fc: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x1E22FCu;
    SET_GPR_U32(ctx, 31, 0x1E2304u);
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2304u; }
        if (ctx->pc != 0x1E2304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2304u; }
        if (ctx->pc != 0x1E2304u) { return; }
    }
    ctx->pc = 0x1E2304u;
label_1e2304:
    // 0x1e2304: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E2304u;
    {
        const bool branch_taken_0x1e2304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2304u;
            // 0x1e2308: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2304) {
            ctx->pc = 0x1E2314u;
            goto label_1e2314;
        }
    }
    ctx->pc = 0x1E230Cu;
    // 0x1e230c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1E230Cu;
    {
        const bool branch_taken_0x1e230c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E230Cu;
            // 0x1e2310: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e230c) {
            ctx->pc = 0x1E234Cu;
            goto label_1e234c;
        }
    }
    ctx->pc = 0x1E2314u;
label_1e2314:
    // 0x1e2314: 0xc04de0c  jal         func_137830
    ctx->pc = 0x1E2314u;
    SET_GPR_U32(ctx, 31, 0x1E231Cu);
    ctx->pc = 0x1E2318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2314u;
            // 0x1e2318: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137830u;
    if (runtime->hasFunction(0x137830u)) {
        auto targetFn = runtime->lookupFunction(0x137830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E231Cu; }
        if (ctx->pc != 0x1E231Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition0__8mgCFrameFPf_0x137830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E231Cu; }
        if (ctx->pc != 0x1E231Cu) { return; }
    }
    ctx->pc = 0x1E231Cu;
label_1e231c:
    // 0x1e231c: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x1e231cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e2320: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e2320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2324: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E2324u;
    SET_GPR_U32(ctx, 31, 0x1E232Cu);
    ctx->pc = 0x1E2328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2324u;
            // 0x1e2328: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E232Cu; }
        if (ctx->pc != 0x1E232Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E232Cu; }
        if (ctx->pc != 0x1E232Cu) { return; }
    }
    ctx->pc = 0x1E232Cu;
label_1e232c:
    // 0x1e232c: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x1e232cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e2330: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e2330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2334: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E2334u;
    SET_GPR_U32(ctx, 31, 0x1E233Cu);
    ctx->pc = 0x1E2338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2334u;
            // 0x1e2338: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E233Cu; }
        if (ctx->pc != 0x1E233Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E233Cu; }
        if (ctx->pc != 0x1E233Cu) { return; }
    }
    ctx->pc = 0x1E233Cu;
label_1e233c:
    // 0x1e233c: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x1e233cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e2340: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E2340u;
    SET_GPR_U32(ctx, 31, 0x1E2348u);
    ctx->pc = 0x1E2344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2340u;
            // 0x1e2344: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2348u; }
        if (ctx->pc != 0x1E2348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2348u; }
        if (ctx->pc != 0x1E2348u) { return; }
    }
    ctx->pc = 0x1E2348u;
label_1e2348:
    // 0x1e2348: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e2348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e234c:
    // 0x1e234c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e234cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2350: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e2350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2354: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2354u;
            // 0x1e2358: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E235Cu;
}
