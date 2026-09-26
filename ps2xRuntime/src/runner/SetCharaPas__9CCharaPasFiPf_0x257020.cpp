#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetCharaPas__9CCharaPasFiPf
// Address: 0x257020 - 0x257058
void SetCharaPas__9CCharaPasFiPf_0x257020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetCharaPas__9CCharaPasFiPf_0x257020");
#endif

    switch (ctx->pc) {
        case 0x257048u: goto label_257048;
        default: break;
    }

    ctx->pc = 0x257020u;

    // 0x257020: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x257020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x257024: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x257024u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x257028: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x257028u;
    {
        const bool branch_taken_0x257028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25702Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257028u;
            // 0x25702c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257028) {
            ctx->pc = 0x257038u;
            goto label_257038;
        }
    }
    ctx->pc = 0x257030u;
    // 0x257030: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x257030u;
    {
        const bool branch_taken_0x257030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257030u;
            // 0x257034: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257030) {
            ctx->pc = 0x25704Cu;
            goto label_25704c;
        }
    }
    ctx->pc = 0x257038u;
label_257038:
    // 0x257038: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x257038u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x25703c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x25703cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x257040: 0xc041c5c  jal         func_107170
    ctx->pc = 0x257040u;
    SET_GPR_U32(ctx, 31, 0x257048u);
    ctx->pc = 0x257044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257040u;
            // 0x257044: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257048u; }
        if (ctx->pc != 0x257048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257048u; }
        if (ctx->pc != 0x257048u) { return; }
    }
    ctx->pc = 0x257048u;
label_257048:
    // 0x257048: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x257048u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25704c:
    // 0x25704c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25704cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257050: 0x3e00008  jr          $ra
    ctx->pc = 0x257050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257050u;
            // 0x257054: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x257058u;
}
