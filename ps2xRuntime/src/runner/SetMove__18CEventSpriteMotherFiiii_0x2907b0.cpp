#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetMove__18CEventSpriteMotherFiiii
// Address: 0x2907b0 - 0x2907fc
void SetMove__18CEventSpriteMotherFiiii_0x2907b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMove__18CEventSpriteMotherFiiii_0x2907b0");
#endif

    switch (ctx->pc) {
        case 0x2907ecu: goto label_2907ec;
        default: break;
    }

    ctx->pc = 0x2907b0u;

    // 0x2907b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2907b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2907b4: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2907B4u;
    {
        const bool branch_taken_0x2907b4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2907B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2907B4u;
            // 0x2907b8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2907b4) {
            ctx->pc = 0x2907C8u;
            goto label_2907c8;
        }
    }
    ctx->pc = 0x2907BCu;
    // 0x2907bc: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x2907bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2907c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2907C0u;
    {
        const bool branch_taken_0x2907c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2907C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2907C0u;
            // 0x2907c4: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2907c0) {
            ctx->pc = 0x2907D0u;
            goto label_2907d0;
        }
    }
    ctx->pc = 0x2907C8u;
label_2907c8:
    // 0x2907c8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2907C8u;
    {
        const bool branch_taken_0x2907c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2907CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2907C8u;
            // 0x2907cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2907c8) {
            ctx->pc = 0x2907F0u;
            goto label_2907f0;
        }
    }
    ctx->pc = 0x2907D0u;
label_2907d0:
    // 0x2907d0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2907d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2907d4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2907d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2907d8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2907d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2907dc: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x2907dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2907e0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2907e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2907e4: 0xc0a40a4  jal         func_290290
    ctx->pc = 0x2907E4u;
    SET_GPR_U32(ctx, 31, 0x2907ECu);
    ctx->pc = 0x2907E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2907E4u;
            // 0x2907e8: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x290290u;
    if (runtime->hasFunction(0x290290u)) {
        auto targetFn = runtime->lookupFunction(0x290290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2907ECu; }
        if (ctx->pc != 0x2907ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMove__12CEventSpriteFiii_0x290290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2907ECu; }
        if (ctx->pc != 0x2907ECu) { return; }
    }
    ctx->pc = 0x2907ECu;
label_2907ec:
    // 0x2907ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2907ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2907f0:
    // 0x2907f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2907f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2907f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2907F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2907F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2907F4u;
            // 0x2907f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2907FCu;
}
