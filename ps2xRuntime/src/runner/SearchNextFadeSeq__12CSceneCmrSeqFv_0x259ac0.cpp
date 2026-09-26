#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchNextFadeSeq__12CSceneCmrSeqFv
// Address: 0x259ac0 - 0x259b1c
void SearchNextFadeSeq__12CSceneCmrSeqFv_0x259ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchNextFadeSeq__12CSceneCmrSeqFv_0x259ac0");
#endif

    switch (ctx->pc) {
        case 0x259ad4u: goto label_259ad4;
        default: break;
    }

    ctx->pc = 0x259ac0u;

    // 0x259ac0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x259ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x259ac4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x259ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x259ac8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x259ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x259acc: 0xc09666c  jal         func_2599B0
    ctx->pc = 0x259ACCu;
    SET_GPR_U32(ctx, 31, 0x259AD4u);
    ctx->pc = 0x259AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259ACCu;
            // 0x259ad0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2599B0u;
    if (runtime->hasFunction(0x2599B0u)) {
        auto targetFn = runtime->lookupFunction(0x2599B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259AD4u; }
        if (ctx->pc != 0x259AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchSeq__12CSceneCmrSeqFv_0x2599b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259AD4u; }
        if (ctx->pc != 0x259AD4u) { return; }
    }
    ctx->pc = 0x259AD4u;
label_259ad4:
    // 0x259ad4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x259AD4u;
    {
        const bool branch_taken_0x259ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x259ad4) {
            ctx->pc = 0x259AE4u;
            goto label_259ae4;
        }
    }
    ctx->pc = 0x259ADCu;
    // 0x259adc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x259ADCu;
    {
        const bool branch_taken_0x259adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259ADCu;
            // 0x259ae0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259adc) {
            ctx->pc = 0x259B0Cu;
            goto label_259b0c;
        }
    }
    ctx->pc = 0x259AE4u;
label_259ae4:
    // 0x259ae4: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x259ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x259ae8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x259AE8u;
    {
        const bool branch_taken_0x259ae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x259ae8) {
            ctx->pc = 0x259AF4u;
            goto label_259af4;
        }
    }
    ctx->pc = 0x259AF0u;
    // 0x259af0: 0xac62005c  sw          $v0, 0x5C($v1)
    ctx->pc = 0x259af0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 2));
label_259af4:
    // 0x259af4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x259af4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x259af8: 0xac40005c  sw          $zero, 0x5C($v0)
    ctx->pc = 0x259af8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 0));
    // 0x259afc: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x259afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x259b00: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x259B00u;
    {
        const bool branch_taken_0x259b00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x259b00) {
            ctx->pc = 0x259B0Cu;
            goto label_259b0c;
        }
    }
    ctx->pc = 0x259B08u;
    // 0x259b08: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x259b08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_259b0c:
    // 0x259b0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x259b0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259b10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x259b10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259b14: 0x3e00008  jr          $ra
    ctx->pc = 0x259B14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259B14u;
            // 0x259b18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x259B1Cu;
}
