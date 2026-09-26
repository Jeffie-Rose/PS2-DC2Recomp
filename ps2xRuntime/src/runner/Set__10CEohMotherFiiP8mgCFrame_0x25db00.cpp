#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Set__10CEohMotherFiiP8mgCFrame
// Address: 0x25db00 - 0x25db3c
void Set__10CEohMotherFiiP8mgCFrame_0x25db00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set__10CEohMotherFiiP8mgCFrame_0x25db00");
#endif

    switch (ctx->pc) {
        case 0x25db30u: goto label_25db30;
        default: break;
    }

    ctx->pc = 0x25db00u;

    // 0x25db00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25db00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25db04: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25DB04u;
    {
        const bool branch_taken_0x25db04 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x25DB08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DB04u;
            // 0x25db08: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25db04) {
            ctx->pc = 0x25DB18u;
            goto label_25db18;
        }
    }
    ctx->pc = 0x25DB0Cu;
    // 0x25db0c: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x25db0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x25db10: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25DB10u;
    {
        const bool branch_taken_0x25db10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25DB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DB10u;
            // 0x25db14: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25db10) {
            ctx->pc = 0x25DB20u;
            goto label_25db20;
        }
    }
    ctx->pc = 0x25DB18u;
label_25db18:
    // 0x25db18: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x25DB18u;
    {
        const bool branch_taken_0x25db18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DB18u;
            // 0x25db1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25db18) {
            ctx->pc = 0x25DB30u;
            goto label_25db30;
        }
    }
    ctx->pc = 0x25DB20u;
label_25db20:
    // 0x25db20: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x25db20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25db24: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x25db24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25db28: 0xc097570  jal         func_25D5C0
    ctx->pc = 0x25DB28u;
    SET_GPR_U32(ctx, 31, 0x25DB30u);
    ctx->pc = 0x25DB2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25DB28u;
            // 0x25db2c: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D5C0u;
    if (runtime->hasFunction(0x25D5C0u)) {
        auto targetFn = runtime->lookupFunction(0x25D5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DB30u; }
        if (ctx->pc != 0x25DB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__4CEohFiP8mgCFrame_0x25d5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DB30u; }
        if (ctx->pc != 0x25DB30u) { return; }
    }
    ctx->pc = 0x25DB30u;
label_25db30:
    // 0x25db30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25db30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25db34: 0x3e00008  jr          $ra
    ctx->pc = 0x25DB34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25DB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DB34u;
            // 0x25db38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25DB3Cu;
}
