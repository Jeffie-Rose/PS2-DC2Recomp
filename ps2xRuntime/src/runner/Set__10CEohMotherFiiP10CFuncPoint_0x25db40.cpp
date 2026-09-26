#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Set__10CEohMotherFiiP10CFuncPoint
// Address: 0x25db40 - 0x25db7c
void Set__10CEohMotherFiiP10CFuncPoint_0x25db40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set__10CEohMotherFiiP10CFuncPoint_0x25db40");
#endif

    switch (ctx->pc) {
        case 0x25db70u: goto label_25db70;
        default: break;
    }

    ctx->pc = 0x25db40u;

    // 0x25db40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25db40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25db44: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25DB44u;
    {
        const bool branch_taken_0x25db44 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x25DB48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DB44u;
            // 0x25db48: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25db44) {
            ctx->pc = 0x25DB58u;
            goto label_25db58;
        }
    }
    ctx->pc = 0x25DB4Cu;
    // 0x25db4c: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x25db4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x25db50: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25DB50u;
    {
        const bool branch_taken_0x25db50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25DB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DB50u;
            // 0x25db54: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25db50) {
            ctx->pc = 0x25DB60u;
            goto label_25db60;
        }
    }
    ctx->pc = 0x25DB58u;
label_25db58:
    // 0x25db58: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x25DB58u;
    {
        const bool branch_taken_0x25db58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DB5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DB58u;
            // 0x25db5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25db58) {
            ctx->pc = 0x25DB70u;
            goto label_25db70;
        }
    }
    ctx->pc = 0x25DB60u;
label_25db60:
    // 0x25db60: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x25db60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25db64: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x25db64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25db68: 0xc097580  jal         func_25D600
    ctx->pc = 0x25DB68u;
    SET_GPR_U32(ctx, 31, 0x25DB70u);
    ctx->pc = 0x25DB6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25DB68u;
            // 0x25db6c: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D600u;
    if (runtime->hasFunction(0x25D600u)) {
        auto targetFn = runtime->lookupFunction(0x25D600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DB70u; }
        if (ctx->pc != 0x25DB70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__4CEohFiP10CFuncPoint_0x25d600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DB70u; }
        if (ctx->pc != 0x25DB70u) { return; }
    }
    ctx->pc = 0x25DB70u;
label_25db70:
    // 0x25db70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25db70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25db74: 0x3e00008  jr          $ra
    ctx->pc = 0x25DB74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25DB78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DB74u;
            // 0x25db78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25DB7Cu;
}
