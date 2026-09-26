#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: JoinPartyMember__16CUserDataManagerFi
// Address: 0x19b9a0 - 0x19b9fc
void JoinPartyMember__16CUserDataManagerFi_0x19b9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("JoinPartyMember__16CUserDataManagerFi_0x19b9a0");
#endif

    switch (ctx->pc) {
        case 0x19b9c4u: goto label_19b9c4;
        default: break;
    }

    ctx->pc = 0x19b9a0u;

    // 0x19b9a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19b9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19b9a4: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19B9A4u;
    {
        const bool branch_taken_0x19b9a4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x19B9A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B9A4u;
            // 0x19b9a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b9a4) {
            ctx->pc = 0x19B9B8u;
            goto label_19b9b8;
        }
    }
    ctx->pc = 0x19B9ACu;
    // 0x19b9ac: 0x28a10004  slti        $at, $a1, 0x4
    ctx->pc = 0x19b9acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x19b9b0: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x19B9B0u;
    {
        const bool branch_taken_0x19b9b0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B9B0u;
            // 0x19b9b4: 0x3c010004  lui         $at, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b9b0) {
            ctx->pc = 0x19B9CCu;
            goto label_19b9cc;
        }
    }
    ctx->pc = 0x19B9B8u;
label_19b9b8:
    // 0x19b9b8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x19b9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x19b9bc: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x19B9BCu;
    SET_GPR_U32(ctx, 31, 0x19B9C4u);
    ctx->pc = 0x19B9C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B9BCu;
            // 0x19b9c0: 0x248459a8  addiu       $a0, $a0, 0x59A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B9C4u; }
        if (ctx->pc != 0x19B9C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B9C4u; }
        if (ctx->pc != 0x19B9C4u) { return; }
    }
    ctx->pc = 0x19B9C4u;
label_19b9c4:
    // 0x19b9c4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x19B9C4u;
    {
        const bool branch_taken_0x19b9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B9C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B9C4u;
            // 0x19b9c8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b9c4) {
            ctx->pc = 0x19B9F4u;
            goto label_19b9f4;
        }
    }
    ctx->pc = 0x19B9CCu;
label_19b9cc:
    // 0x19b9cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19b9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b9d0: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x19b9d0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x19b9d4: 0xa62804  sllv        $a1, $a2, $a1
    ctx->pc = 0x19b9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
    // 0x19b9d8: 0x94234d90  lhu         $v1, 0x4D90($at)
    ctx->pc = 0x19b9d8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 19856)));
    // 0x19b9dc: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x19b9dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x19b9e0: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x19b9e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x19b9e4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x19b9e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x19b9e8: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x19b9e8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x19b9ec: 0xa4234d90  sh          $v1, 0x4D90($at)
    ctx->pc = 0x19b9ecu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 19856), (uint16_t)GPR_U32(ctx, 3));
    // 0x19b9f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19b9f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19b9f4:
    // 0x19b9f4: 0x3e00008  jr          $ra
    ctx->pc = 0x19B9F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B9F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B9F4u;
            // 0x19b9f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19B9FCu;
}
