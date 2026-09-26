#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PlaceRiverParts__8CEditMapFPf
// Address: 0x1b21d0 - 0x1b2218
void PlaceRiverParts__8CEditMapFPf_0x1b21d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PlaceRiverParts__8CEditMapFPf_0x1b21d0");
#endif

    switch (ctx->pc) {
        case 0x1b21ecu: goto label_1b21ec;
        case 0x1b2200u: goto label_1b2200;
        default: break;
    }

    ctx->pc = 0x1b21d0u;

    // 0x1b21d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b21d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b21d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b21d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b21d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b21d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b21dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b21dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b21e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b21e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b21e4: 0xc0bb8a0  jal         func_2EE280
    ctx->pc = 0x1B21E4u;
    SET_GPR_U32(ctx, 31, 0x1B21ECu);
    ctx->pc = 0x1B21E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B21E4u;
            // 0x1b21e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE280u;
    if (runtime->hasFunction(0x2EE280u)) {
        auto targetFn = runtime->lookupFunction(0x2EE280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B21ECu; }
        if (ctx->pc != 0x1B21ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckRiverParts__8CEditMapFPf_0x2ee280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B21ECu; }
        if (ctx->pc != 0x1B21ECu) { return; }
    }
    ctx->pc = 0x1B21ECu;
label_1b21ec:
    // 0x1b21ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B21ECu;
    {
        const bool branch_taken_0x1b21ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B21F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B21ECu;
            // 0x1b21f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b21ec) {
            ctx->pc = 0x1B2204u;
            goto label_1b2204;
        }
    }
    ctx->pc = 0x1B21F4u;
    // 0x1b21f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b21f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b21f8: 0xc0a59ec  jal         func_2967B0
    ctx->pc = 0x1B21F8u;
    SET_GPR_U32(ctx, 31, 0x1B2200u);
    ctx->pc = 0x1B21FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B21F8u;
            // 0x1b21fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2967B0u;
    if (runtime->hasFunction(0x2967B0u)) {
        auto targetFn = runtime->lookupFunction(0x2967B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2200u; }
        if (ctx->pc != 0x1B2200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlaceRiver__8CEditMapFPf_0x2967b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2200u; }
        if (ctx->pc != 0x1B2200u) { return; }
    }
    ctx->pc = 0x1B2200u;
label_1b2200:
    // 0x1b2200: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b2200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b2204:
    // 0x1b2204: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b2204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2208: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b2208u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b220c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b220cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2210: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2210u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2210u;
            // 0x1b2214: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B2218u;
}
