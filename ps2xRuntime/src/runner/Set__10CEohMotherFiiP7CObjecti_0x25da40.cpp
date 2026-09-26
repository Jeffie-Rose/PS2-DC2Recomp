#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Set__10CEohMotherFiiP7CObjecti
// Address: 0x25da40 - 0x25da80
void Set__10CEohMotherFiiP7CObjecti_0x25da40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set__10CEohMotherFiiP7CObjecti_0x25da40");
#endif

    switch (ctx->pc) {
        case 0x25da74u: goto label_25da74;
        default: break;
    }

    ctx->pc = 0x25da40u;

    // 0x25da40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25da40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25da44: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25DA44u;
    {
        const bool branch_taken_0x25da44 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x25DA48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DA44u;
            // 0x25da48: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25da44) {
            ctx->pc = 0x25DA58u;
            goto label_25da58;
        }
    }
    ctx->pc = 0x25DA4Cu;
    // 0x25da4c: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x25da4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x25da50: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25DA50u;
    {
        const bool branch_taken_0x25da50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25DA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DA50u;
            // 0x25da54: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25da50) {
            ctx->pc = 0x25DA60u;
            goto label_25da60;
        }
    }
    ctx->pc = 0x25DA58u;
label_25da58:
    // 0x25da58: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25DA58u;
    {
        const bool branch_taken_0x25da58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DA58u;
            // 0x25da5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25da58) {
            ctx->pc = 0x25DA74u;
            goto label_25da74;
        }
    }
    ctx->pc = 0x25DA60u;
label_25da60:
    // 0x25da60: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x25da60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25da64: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x25da64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25da68: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x25da68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25da6c: 0xc097540  jal         func_25D500
    ctx->pc = 0x25DA6Cu;
    SET_GPR_U32(ctx, 31, 0x25DA74u);
    ctx->pc = 0x25DA70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25DA6Cu;
            // 0x25da70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D500u;
    if (runtime->hasFunction(0x25D500u)) {
        auto targetFn = runtime->lookupFunction(0x25D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DA74u; }
        if (ctx->pc != 0x25DA74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__4CEohFiP7CObjecti_0x25d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DA74u; }
        if (ctx->pc != 0x25DA74u) { return; }
    }
    ctx->pc = 0x25DA74u;
label_25da74:
    // 0x25da74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25da74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25da78: 0x3e00008  jr          $ra
    ctx->pc = 0x25DA78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25DA7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DA78u;
            // 0x25da7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25DA80u;
}
