#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndSetSeVolPrKr__FUiiiii
// Address: 0x18f230 - 0x18f288
void sndSetSeVolPrKr__FUiiiii_0x18f230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndSetSeVolPrKr__FUiiiii_0x18f230");
#endif

    switch (ctx->pc) {
        case 0x18f25cu: goto label_18f25c;
        case 0x18f27cu: goto label_18f27c;
        default: break;
    }

    ctx->pc = 0x18f230u;

    // 0x18f230: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18f230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18f234: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18f234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18f238: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18f238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18f23c: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x18f23cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f240: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x18f240u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f244: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x18f244u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f248: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x18F248u;
    {
        const bool branch_taken_0x18f248 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x18F24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F248u;
            // 0x18f24c: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f248) {
            ctx->pc = 0x18F27Cu;
            goto label_18f27c;
        }
    }
    ctx->pc = 0x18F250u;
    // 0x18f250: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x18f250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x18f254: 0xc0637f0  jal         func_18DFC0
    ctx->pc = 0x18F254u;
    SET_GPR_U32(ctx, 31, 0x18F25Cu);
    ctx->pc = 0x18F258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F254u;
            // 0x18f258: 0x27a6001c  addiu       $a2, $sp, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DFC0u;
    if (runtime->hasFunction(0x18DFC0u)) {
        auto targetFn = runtime->lookupFunction(0x18DFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F25Cu; }
        if (ctx->pc != 0x18F25Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPortBankNo__FUiPiPi_0x18dfc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F25Cu; }
        if (ctx->pc != 0x18F25Cu) { return; }
    }
    ctx->pc = 0x18F25Cu;
label_18f25c:
    // 0x18f25c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18F25Cu;
    {
        const bool branch_taken_0x18f25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f25c) {
            ctx->pc = 0x18F27Cu;
            goto label_18f27c;
        }
    }
    ctx->pc = 0x18F264u;
    // 0x18f264: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x18f264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18f268: 0x180302d  daddu       $a2, $t4, $zero
    ctx->pc = 0x18f268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f26c: 0x8fa5001c  lw          $a1, 0x1C($sp)
    ctx->pc = 0x18f26cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x18f270: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x18f270u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f274: 0xc063d28  jal         func_18F4A0
    ctx->pc = 0x18F274u;
    SET_GPR_U32(ctx, 31, 0x18F27Cu);
    ctx->pc = 0x18F278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F274u;
            // 0x18f278: 0x140402d  daddu       $t0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F4A0u;
    if (runtime->hasFunction(0x18F4A0u)) {
        auto targetFn = runtime->lookupFunction(0x18F4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F27Cu; }
        if (ctx->pc != 0x18F27Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSetSeVolPBPrKr__Fiiiiii_0x18f4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F27Cu; }
        if (ctx->pc != 0x18F27Cu) { return; }
    }
    ctx->pc = 0x18F27Cu;
label_18f27c:
    // 0x18f27c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18f27cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f280: 0x3e00008  jr          $ra
    ctx->pc = 0x18F280u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F280u;
            // 0x18f284: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18F288u;
}
