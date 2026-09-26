#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetRoomGlid__11CDngFreeMapFi
// Address: 0x1eab30 - 0x1eab58
void GetRoomGlid__11CDngFreeMapFi_0x1eab30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetRoomGlid__11CDngFreeMapFi_0x1eab30");
#endif

    switch (ctx->pc) {
        case 0x1eab4cu: goto label_1eab4c;
        default: break;
    }

    ctx->pc = 0x1eab30u;

    // 0x1eab30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1eab30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1eab34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eab34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1eab38: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1eab38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1eab3c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EAB3Cu;
    {
        const bool branch_taken_0x1eab3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAB40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAB3Cu;
            // 0x1eab40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eab3c) {
            ctx->pc = 0x1EAB4Cu;
            goto label_1eab4c;
        }
    }
    ctx->pc = 0x1EAB44u;
    // 0x1eab44: 0xc0be584  jal         func_2F9610
    ctx->pc = 0x1EAB44u;
    SET_GPR_U32(ctx, 31, 0x1EAB4Cu);
    ctx->pc = 0x2F9610u;
    if (runtime->hasFunction(0x2F9610u)) {
        auto targetFn = runtime->lookupFunction(0x2F9610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAB4Cu; }
        if (ctx->pc != 0x1EAB4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDngMapFloorGlidInfo__16CDngFloorManagerFi_0x2f9610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAB4Cu; }
        if (ctx->pc != 0x1EAB4Cu) { return; }
    }
    ctx->pc = 0x1EAB4Cu;
label_1eab4c:
    // 0x1eab4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eab4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eab50: 0x3e00008  jr          $ra
    ctx->pc = 0x1EAB50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EAB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAB50u;
            // 0x1eab54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EAB58u;
}
