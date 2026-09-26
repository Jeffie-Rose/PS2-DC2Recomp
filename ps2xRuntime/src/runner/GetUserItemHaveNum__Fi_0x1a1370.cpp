#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetUserItemHaveNum__Fi
// Address: 0x1a1370 - 0x1a13b0
void GetUserItemHaveNum__Fi_0x1a1370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetUserItemHaveNum__Fi_0x1a1370");
#endif

    switch (ctx->pc) {
        case 0x1a1384u: goto label_1a1384;
        case 0x1a1394u: goto label_1a1394;
        default: break;
    }

    ctx->pc = 0x1a1370u;

    // 0x1a1370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a1370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a1374: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a1374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a1378: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a1378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a137c: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x1A137Cu;
    SET_GPR_U32(ctx, 31, 0x1A1384u);
    ctx->pc = 0x1A1380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A137Cu;
            // 0x1a1380: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1384u; }
        if (ctx->pc != 0x1A1384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1384u; }
        if (ctx->pc != 0x1A1384u) { return; }
    }
    ctx->pc = 0x1A1384u;
label_1a1384:
    // 0x1a1384: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A1384u;
    {
        const bool branch_taken_0x1a1384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1384u;
            // 0x1a1388: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1384) {
            ctx->pc = 0x1A139Cu;
            goto label_1a139c;
        }
    }
    ctx->pc = 0x1A138Cu;
    // 0x1a138c: 0xc067778  jal         func_19DDE0
    ctx->pc = 0x1A138Cu;
    SET_GPR_U32(ctx, 31, 0x1A1394u);
    ctx->pc = 0x1A1390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A138Cu;
            // 0x1a1390: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DDE0u;
    if (runtime->hasFunction(0x19DDE0u)) {
        auto targetFn = runtime->lookupFunction(0x19DDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1394u; }
        if (ctx->pc != 0x1A1394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNumSameItem__16CUserDataManagerFi_0x19dde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1394u; }
        if (ctx->pc != 0x1A1394u) { return; }
    }
    ctx->pc = 0x1A1394u;
label_1a1394:
    // 0x1a1394: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1394u;
    {
        const bool branch_taken_0x1a1394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1394u;
            // 0x1a1398: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1394) {
            ctx->pc = 0x1A13A4u;
            goto label_1a13a4;
        }
    }
    ctx->pc = 0x1A139Cu;
label_1a139c:
    // 0x1a139c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a139cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a13a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a13a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a13a4:
    // 0x1a13a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a13a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a13a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A13A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A13ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A13A8u;
            // 0x1a13ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A13B0u;
}
