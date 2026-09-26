#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetKeyNextRoom__16CDngFloorManagerFiiP9GLID_INFO
// Address: 0x2fa4e0 - 0x2fa548
void GetKeyNextRoom__16CDngFloorManagerFiiP9GLID_INFO_0x2fa4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetKeyNextRoom__16CDngFloorManagerFiiP9GLID_INFO_0x2fa4e0");
#endif

    switch (ctx->pc) {
        case 0x2fa4fcu: goto label_2fa4fc;
        case 0x2fa534u: goto label_2fa534;
        default: break;
    }

    ctx->pc = 0x2fa4e0u;

    // 0x2fa4e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fa4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fa4e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fa4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2fa4e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fa4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2fa4ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fa4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2fa4f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fa4f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa4f4: 0xc0be584  jal         func_2F9610
    ctx->pc = 0x2FA4F4u;
    SET_GPR_U32(ctx, 31, 0x2FA4FCu);
    ctx->pc = 0x2FA4F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA4F4u;
            // 0x2fa4f8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F9610u;
    if (runtime->hasFunction(0x2F9610u)) {
        auto targetFn = runtime->lookupFunction(0x2F9610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA4FCu; }
        if (ctx->pc != 0x2FA4FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDngMapFloorGlidInfo__16CDngFloorManagerFi_0x2f9610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA4FCu; }
        if (ctx->pc != 0x2FA4FCu) { return; }
    }
    ctx->pc = 0x2FA4FCu;
label_2fa4fc:
    // 0x2fa4fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FA4FCu;
    {
        const bool branch_taken_0x2fa4fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fa4fc) {
            ctx->pc = 0x2FA50Cu;
            goto label_2fa50c;
        }
    }
    ctx->pc = 0x2FA504u;
    // 0x2fa504: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2FA504u;
    {
        const bool branch_taken_0x2fa504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA504u;
            // 0x2fa508: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa504) {
            ctx->pc = 0x2FA534u;
            goto label_2fa534;
        }
    }
    ctx->pc = 0x2FA50Cu;
label_2fa50c:
    // 0x2fa50c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2fa50cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fa510: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fa510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fa514: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FA514u;
    {
        const bool branch_taken_0x2fa514 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2FA518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA514u;
            // 0x2fa518: 0x101840  sll         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa514) {
            ctx->pc = 0x2FA524u;
            goto label_2fa524;
        }
    }
    ctx->pc = 0x2FA51Cu;
    // 0x2fa51c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FA51Cu;
    {
        const bool branch_taken_0x2fa51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA51Cu;
            // 0x2fa520: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa51c) {
            ctx->pc = 0x2FA534u;
            goto label_2fa534;
        }
    }
    ctx->pc = 0x2FA524u;
label_2fa524:
    // 0x2fa524: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2fa524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2fa528: 0x84450056  lh          $a1, 0x56($v0)
    ctx->pc = 0x2fa528u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 86)));
    // 0x2fa52c: 0xc0be584  jal         func_2F9610
    ctx->pc = 0x2FA52Cu;
    SET_GPR_U32(ctx, 31, 0x2FA534u);
    ctx->pc = 0x2FA530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA52Cu;
            // 0x2fa530: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F9610u;
    if (runtime->hasFunction(0x2F9610u)) {
        auto targetFn = runtime->lookupFunction(0x2F9610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA534u; }
        if (ctx->pc != 0x2FA534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDngMapFloorGlidInfo__16CDngFloorManagerFi_0x2f9610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA534u; }
        if (ctx->pc != 0x2FA534u) { return; }
    }
    ctx->pc = 0x2FA534u;
label_2fa534:
    // 0x2fa534: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fa534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fa538: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fa538u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fa53c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fa53cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fa540: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA540u;
            // 0x2fa544: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FA548u;
}
