#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Set__10CEohMotherFiiiP11CCharacter2
// Address: 0x25da80 - 0x25dac0
void Set__10CEohMotherFiiiP11CCharacter2_0x25da80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set__10CEohMotherFiiiP11CCharacter2_0x25da80");
#endif

    switch (ctx->pc) {
        case 0x25dab4u: goto label_25dab4;
        default: break;
    }

    ctx->pc = 0x25da80u;

    // 0x25da80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25da80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25da84: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25DA84u;
    {
        const bool branch_taken_0x25da84 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x25DA88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DA84u;
            // 0x25da88: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25da84) {
            ctx->pc = 0x25DA98u;
            goto label_25da98;
        }
    }
    ctx->pc = 0x25DA8Cu;
    // 0x25da8c: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x25da8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x25da90: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25DA90u;
    {
        const bool branch_taken_0x25da90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25DA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DA90u;
            // 0x25da94: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25da90) {
            ctx->pc = 0x25DAA0u;
            goto label_25daa0;
        }
    }
    ctx->pc = 0x25DA98u;
label_25da98:
    // 0x25da98: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25DA98u;
    {
        const bool branch_taken_0x25da98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DA9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DA98u;
            // 0x25da9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25da98) {
            ctx->pc = 0x25DAB4u;
            goto label_25dab4;
        }
    }
    ctx->pc = 0x25DAA0u;
label_25daa0:
    // 0x25daa0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x25daa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25daa4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x25daa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25daa8: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x25daa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25daac: 0xc097550  jal         func_25D540
    ctx->pc = 0x25DAACu;
    SET_GPR_U32(ctx, 31, 0x25DAB4u);
    ctx->pc = 0x25DAB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25DAACu;
            // 0x25dab0: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D540u;
    if (runtime->hasFunction(0x25D540u)) {
        auto targetFn = runtime->lookupFunction(0x25D540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DAB4u; }
        if (ctx->pc != 0x25DAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__4CEohFiiP11CCharacter2_0x25d540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DAB4u; }
        if (ctx->pc != 0x25DAB4u) { return; }
    }
    ctx->pc = 0x25DAB4u;
label_25dab4:
    // 0x25dab4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25dab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25dab8: 0x3e00008  jr          $ra
    ctx->pc = 0x25DAB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25DABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DAB8u;
            // 0x25dabc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25DAC0u;
}
