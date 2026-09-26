#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetPos__10CAfterWireFPf
// Address: 0x1c23e0 - 0x1c2488
void SetPos__10CAfterWireFPf_0x1c23e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPos__10CAfterWireFPf_0x1c23e0");
#endif

    switch (ctx->pc) {
        case 0x1c2404u: goto label_1c2404;
        default: break;
    }

    ctx->pc = 0x1c23e0u;

    // 0x1c23e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c23e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c23e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c23e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c23e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c23e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c23ec: 0x84820116  lh          $v0, 0x116($a0)
    ctx->pc = 0x1c23ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 278)));
    // 0x1c23f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c23f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c23f4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c23f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c23f8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1c23f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1c23fc: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1C23FCu;
    SET_GPR_U32(ctx, 31, 0x1C2404u);
    ctx->pc = 0x1C2400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C23FCu;
            // 0x1c2400: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2404u; }
        if (ctx->pc != 0x1C2404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2404u; }
        if (ctx->pc != 0x1C2404u) { return; }
    }
    ctx->pc = 0x1C2404u;
label_1c2404:
    // 0x1c2404: 0x86030116  lh          $v1, 0x116($s0)
    ctx->pc = 0x1c2404u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 278)));
    // 0x1c2408: 0xa6030118  sh          $v1, 0x118($s0)
    ctx->pc = 0x1c2408u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c240c: 0x86030116  lh          $v1, 0x116($s0)
    ctx->pc = 0x1c240cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 278)));
    // 0x1c2410: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c2410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c2414: 0xa6030116  sh          $v1, 0x116($s0)
    ctx->pc = 0x1c2414u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 278), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c2418: 0x86030116  lh          $v1, 0x116($s0)
    ctx->pc = 0x1c2418u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 278)));
    // 0x1c241c: 0x28610010  slti        $at, $v1, 0x10
    ctx->pc = 0x1c241cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1c2420: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C2420u;
    {
        const bool branch_taken_0x1c2420 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2420) {
            ctx->pc = 0x1C242Cu;
            goto label_1c242c;
        }
    }
    ctx->pc = 0x1C2428u;
    // 0x1c2428: 0xa6000116  sh          $zero, 0x116($s0)
    ctx->pc = 0x1c2428u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 278), (uint16_t)GPR_U32(ctx, 0));
label_1c242c:
    // 0x1c242c: 0x86030118  lh          $v1, 0x118($s0)
    ctx->pc = 0x1c242cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x1c2430: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c2430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c2434: 0xa6030114  sh          $v1, 0x114($s0)
    ctx->pc = 0x1c2434u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 276), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c2438: 0x86030114  lh          $v1, 0x114($s0)
    ctx->pc = 0x1c2438u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1c243c: 0x28610011  slti        $at, $v1, 0x11
    ctx->pc = 0x1c243cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1c2440: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C2440u;
    {
        const bool branch_taken_0x1c2440 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2440) {
            ctx->pc = 0x1C244Cu;
            goto label_1c244c;
        }
    }
    ctx->pc = 0x1C2448u;
    // 0x1c2448: 0xa6000114  sh          $zero, 0x114($s0)
    ctx->pc = 0x1c2448u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 276), (uint16_t)GPR_U32(ctx, 0));
label_1c244c:
    // 0x1c244c: 0x86030112  lh          $v1, 0x112($s0)
    ctx->pc = 0x1c244cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 274)));
    // 0x1c2450: 0x28610010  slti        $at, $v1, 0x10
    ctx->pc = 0x1c2450u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1c2454: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C2454u;
    {
        const bool branch_taken_0x1c2454 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2454) {
            ctx->pc = 0x1C2460u;
            goto label_1c2460;
        }
    }
    ctx->pc = 0x1C245Cu;
    // 0x1c245c: 0xa6000114  sh          $zero, 0x114($s0)
    ctx->pc = 0x1c245cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 276), (uint16_t)GPR_U32(ctx, 0));
label_1c2460:
    // 0x1c2460: 0x86030112  lh          $v1, 0x112($s0)
    ctx->pc = 0x1c2460u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 274)));
    // 0x1c2464: 0x28610010  slti        $at, $v1, 0x10
    ctx->pc = 0x1c2464u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1c2468: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C2468u;
    {
        const bool branch_taken_0x1c2468 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2468) {
            ctx->pc = 0x1C2478u;
            goto label_1c2478;
        }
    }
    ctx->pc = 0x1C2470u;
    // 0x1c2470: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c2470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c2474: 0xa6030112  sh          $v1, 0x112($s0)
    ctx->pc = 0x1c2474u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 274), (uint16_t)GPR_U32(ctx, 3));
label_1c2478:
    // 0x1c2478: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c2478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c247c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c247cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2480: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2480u;
            // 0x1c2484: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C2488u;
}
