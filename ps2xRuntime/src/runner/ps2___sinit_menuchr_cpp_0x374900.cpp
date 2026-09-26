#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __sinit_menuchr.cpp
// Address: 0x374900 - 0x374994
void ps2___sinit_menuchr_cpp_0x374900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sinit_menuchr_cpp_0x374900");
#endif

    switch (ctx->pc) {
        case 0x374928u: goto label_374928;
        case 0x374934u: goto label_374934;
        case 0x374940u: goto label_374940;
        case 0x37494cu: goto label_37494c;
        case 0x374958u: goto label_374958;
        case 0x374964u: goto label_374964;
        case 0x374970u: goto label_374970;
        case 0x37497cu: goto label_37497c;
        case 0x374988u: goto label_374988;
        default: break;
    }

    ctx->pc = 0x374900u;

    // 0x374900: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x374900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x374904: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x374904u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x374908: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x374908u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x37490c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37490cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x374910: 0x2484cac0  addiu       $a0, $a0, -0x3540
    ctx->pc = 0x374910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953664));
    // 0x374914: 0x24a56260  addiu       $a1, $a1, 0x6260
    ctx->pc = 0x374914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25184));
    // 0x374918: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x374918u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37491c: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x37491cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x374920: 0xc040070  jal         func_1001C0
    ctx->pc = 0x374920u;
    SET_GPR_U32(ctx, 31, 0x374928u);
    ctx->pc = 0x374924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374920u;
            // 0x374924: 0x24080007  addiu       $t0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001C0u;
    if (runtime->hasFunction(0x1001C0u)) {
        auto targetFn = runtime->lookupFunction(0x1001C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374928u; }
        if (ctx->pc != 0x374928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_array_0x1001c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374928u; }
        if (ctx->pc != 0x374928u) { return; }
    }
    ctx->pc = 0x374928u;
label_374928:
    // 0x374928: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x374928u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x37492c: 0xc04e640  jal         func_139900
    ctx->pc = 0x37492Cu;
    SET_GPR_U32(ctx, 31, 0x374934u);
    ctx->pc = 0x374930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37492Cu;
            // 0x374930: 0x2484cc50  addiu       $a0, $a0, -0x33B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374934u; }
        if (ctx->pc != 0x374934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374934u; }
        if (ctx->pc != 0x374934u) { return; }
    }
    ctx->pc = 0x374934u;
label_374934:
    // 0x374934: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x374934u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x374938: 0xc04e640  jal         func_139900
    ctx->pc = 0x374938u;
    SET_GPR_U32(ctx, 31, 0x374940u);
    ctx->pc = 0x37493Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374938u;
            // 0x37493c: 0x2484cc80  addiu       $a0, $a0, -0x3380 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374940u; }
        if (ctx->pc != 0x374940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374940u; }
        if (ctx->pc != 0x374940u) { return; }
    }
    ctx->pc = 0x374940u;
label_374940:
    // 0x374940: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x374940u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x374944: 0xc04e640  jal         func_139900
    ctx->pc = 0x374944u;
    SET_GPR_U32(ctx, 31, 0x37494Cu);
    ctx->pc = 0x374948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374944u;
            // 0x374948: 0x2484ccb0  addiu       $a0, $a0, -0x3350 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37494Cu; }
        if (ctx->pc != 0x37494Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37494Cu; }
        if (ctx->pc != 0x37494Cu) { return; }
    }
    ctx->pc = 0x37494Cu;
label_37494c:
    // 0x37494c: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x37494cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x374950: 0xc04e640  jal         func_139900
    ctx->pc = 0x374950u;
    SET_GPR_U32(ctx, 31, 0x374958u);
    ctx->pc = 0x374954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374950u;
            // 0x374954: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374958u; }
        if (ctx->pc != 0x374958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374958u; }
        if (ctx->pc != 0x374958u) { return; }
    }
    ctx->pc = 0x374958u;
label_374958:
    // 0x374958: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x374958u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x37495c: 0xc04e640  jal         func_139900
    ctx->pc = 0x37495Cu;
    SET_GPR_U32(ctx, 31, 0x374964u);
    ctx->pc = 0x374960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37495Cu;
            // 0x374960: 0x2484ced0  addiu       $a0, $a0, -0x3130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374964u; }
        if (ctx->pc != 0x374964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374964u; }
        if (ctx->pc != 0x374964u) { return; }
    }
    ctx->pc = 0x374964u;
label_374964:
    // 0x374964: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x374964u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x374968: 0xc04e640  jal         func_139900
    ctx->pc = 0x374968u;
    SET_GPR_U32(ctx, 31, 0x374970u);
    ctx->pc = 0x37496Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374968u;
            // 0x37496c: 0x2484cf00  addiu       $a0, $a0, -0x3100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954752));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374970u; }
        if (ctx->pc != 0x374970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374970u; }
        if (ctx->pc != 0x374970u) { return; }
    }
    ctx->pc = 0x374970u;
label_374970:
    // 0x374970: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x374970u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x374974: 0xc04e640  jal         func_139900
    ctx->pc = 0x374974u;
    SET_GPR_U32(ctx, 31, 0x37497Cu);
    ctx->pc = 0x374978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374974u;
            // 0x374978: 0x2484d010  addiu       $a0, $a0, -0x2FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37497Cu; }
        if (ctx->pc != 0x37497Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37497Cu; }
        if (ctx->pc != 0x37497Cu) { return; }
    }
    ctx->pc = 0x37497Cu;
label_37497c:
    // 0x37497c: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x37497cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x374980: 0xc04e640  jal         func_139900
    ctx->pc = 0x374980u;
    SET_GPR_U32(ctx, 31, 0x374988u);
    ctx->pc = 0x374984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374980u;
            // 0x374984: 0x2484d170  addiu       $a0, $a0, -0x2E90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374988u; }
        if (ctx->pc != 0x374988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374988u; }
        if (ctx->pc != 0x374988u) { return; }
    }
    ctx->pc = 0x374988u;
label_374988:
    // 0x374988: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x374988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37498c: 0x3e00008  jr          $ra
    ctx->pc = 0x37498Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37498Cu;
            // 0x374990: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x374994u;
}
