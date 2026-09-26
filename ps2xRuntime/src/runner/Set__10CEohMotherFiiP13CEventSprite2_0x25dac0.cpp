#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Set__10CEohMotherFiiP13CEventSprite2
// Address: 0x25dac0 - 0x25dafc
void Set__10CEohMotherFiiP13CEventSprite2_0x25dac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set__10CEohMotherFiiP13CEventSprite2_0x25dac0");
#endif

    switch (ctx->pc) {
        case 0x25daf0u: goto label_25daf0;
        default: break;
    }

    ctx->pc = 0x25dac0u;

    // 0x25dac0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25dac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25dac4: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25DAC4u;
    {
        const bool branch_taken_0x25dac4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x25DAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DAC4u;
            // 0x25dac8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dac4) {
            ctx->pc = 0x25DAD8u;
            goto label_25dad8;
        }
    }
    ctx->pc = 0x25DACCu;
    // 0x25dacc: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x25daccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x25dad0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25DAD0u;
    {
        const bool branch_taken_0x25dad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25DAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DAD0u;
            // 0x25dad4: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dad0) {
            ctx->pc = 0x25DAE0u;
            goto label_25dae0;
        }
    }
    ctx->pc = 0x25DAD8u;
label_25dad8:
    // 0x25dad8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x25DAD8u;
    {
        const bool branch_taken_0x25dad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DAD8u;
            // 0x25dadc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dad8) {
            ctx->pc = 0x25DAF0u;
            goto label_25daf0;
        }
    }
    ctx->pc = 0x25DAE0u;
label_25dae0:
    // 0x25dae0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x25dae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dae4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x25dae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25dae8: 0xc097560  jal         func_25D580
    ctx->pc = 0x25DAE8u;
    SET_GPR_U32(ctx, 31, 0x25DAF0u);
    ctx->pc = 0x25DAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25DAE8u;
            // 0x25daec: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D580u;
    if (runtime->hasFunction(0x25D580u)) {
        auto targetFn = runtime->lookupFunction(0x25D580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DAF0u; }
        if (ctx->pc != 0x25DAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__4CEohFiP13CEventSprite2_0x25d580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DAF0u; }
        if (ctx->pc != 0x25DAF0u) { return; }
    }
    ctx->pc = 0x25DAF0u;
label_25daf0:
    // 0x25daf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25daf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25daf4: 0x3e00008  jr          $ra
    ctx->pc = 0x25DAF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25DAF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DAF4u;
            // 0x25daf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25DAFCu;
}
