#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ReturnSelectMode__12CMenuGeoramaFi
// Address: 0x1f9ce0 - 0x1f9d48
void ReturnSelectMode__12CMenuGeoramaFi_0x1f9ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ReturnSelectMode__12CMenuGeoramaFi_0x1f9ce0");
#endif

    switch (ctx->pc) {
        case 0x1f9d18u: goto label_1f9d18;
        case 0x1f9d30u: goto label_1f9d30;
        default: break;
    }

    ctx->pc = 0x1f9ce0u;

    // 0x1f9ce0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f9ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f9ce4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f9ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f9ce8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f9ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f9cec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f9cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f9cf0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f9cf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9cf4: 0x84820014  lh          $v0, 0x14($a0)
    ctx->pc = 0x1f9cf4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1f9cf8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f9cf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9cfc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f9cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f9d00: 0xac820148  sw          $v0, 0x148($a0)
    ctx->pc = 0x1f9d00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 2));
    // 0x1f9d04: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9D04u;
    {
        const bool branch_taken_0x1f9d04 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9D04u;
            // 0x1f9d08: 0xa4800014  sh          $zero, 0x14($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9d04) {
            ctx->pc = 0x1F9D18u;
            goto label_1f9d18;
        }
    }
    ctx->pc = 0x1F9D0Cu;
    // 0x1f9d0c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1f9d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1f9d10: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x1F9D10u;
    SET_GPR_U32(ctx, 31, 0x1F9D18u);
    ctx->pc = 0x1F9D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9D10u;
            // 0x1f9d14: 0x24a58bb8  addiu       $a1, $a1, -0x7448 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9D18u; }
        if (ctx->pc != 0x1F9D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9D18u; }
        if (ctx->pc != 0x1F9D18u) { return; }
    }
    ctx->pc = 0x1F9D18u;
label_1f9d18:
    // 0x1f9d18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f9d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9d1c: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9D1Cu;
    {
        const bool branch_taken_0x1f9d1c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F9D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9D1Cu;
            // 0x1f9d20: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9d1c) {
            ctx->pc = 0x1F9D30u;
            goto label_1f9d30;
        }
    }
    ctx->pc = 0x1F9D24u;
    // 0x1f9d24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f9d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9d28: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x1F9D28u;
    SET_GPR_U32(ctx, 31, 0x1F9D30u);
    ctx->pc = 0x1F9D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9D28u;
            // 0x1f9d2c: 0x24a58bd0  addiu       $a1, $a1, -0x7430 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9D30u; }
        if (ctx->pc != 0x1F9D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9D30u; }
        if (ctx->pc != 0x1F9D30u) { return; }
    }
    ctx->pc = 0x1F9D30u;
label_1f9d30:
    // 0x1f9d30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f9d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9d34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f9d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9d38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f9d38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9d3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f9d3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9d40: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9D40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9D40u;
            // 0x1f9d44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F9D48u;
}
