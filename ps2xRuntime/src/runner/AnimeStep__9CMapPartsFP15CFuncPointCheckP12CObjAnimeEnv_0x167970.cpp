#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AnimeStep__9CMapPartsFP15CFuncPointCheckP12CObjAnimeEnv
// Address: 0x167970 - 0x1679ec
void AnimeStep__9CMapPartsFP15CFuncPointCheckP12CObjAnimeEnv_0x167970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AnimeStep__9CMapPartsFP15CFuncPointCheckP12CObjAnimeEnv_0x167970");
#endif

    switch (ctx->pc) {
        case 0x167998u: goto label_167998;
        case 0x1679acu: goto label_1679ac;
        case 0x1679bcu: goto label_1679bc;
        default: break;
    }

    ctx->pc = 0x167970u;

    // 0x167970: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x167970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x167974: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x167974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x167978: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x167978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16797c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16797cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x167980: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x167980u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167984: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x167984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x167988: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x167988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16798c: 0x8c9002f0  lw          $s0, 0x2F0($a0)
    ctx->pc = 0x16798cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 752)));
    // 0x167990: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x167990u;
    {
        const bool branch_taken_0x167990 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x167994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167990u;
            // 0x167994: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167990) {
            ctx->pc = 0x1679CCu;
            goto label_1679cc;
        }
    }
    ctx->pc = 0x167998u;
label_167998:
    // 0x167998: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x167998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x16799c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16799Cu;
    {
        const bool branch_taken_0x16799c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1679A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16799Cu;
            // 0x1679a0: 0x26110010  addiu       $s1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16799c) {
            ctx->pc = 0x1679BCu;
            goto label_1679bc;
        }
    }
    ctx->pc = 0x1679A4u;
    // 0x1679a4: 0xc0a71b0  jal         func_29C6C0
    ctx->pc = 0x1679A4u;
    SET_GPR_U32(ctx, 31, 0x1679ACu);
    ctx->pc = 0x1679A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1679A4u;
            // 0x1679a8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C6C0u;
    if (runtime->hasFunction(0x29C6C0u)) {
        auto targetFn = runtime->lookupFunction(0x29C6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1679ACu; }
        if (ctx->pc != 0x1679ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Check__10CFuncPointFP15CFuncPointCheck_0x29c6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1679ACu; }
        if (ctx->pc != 0x1679ACu) { return; }
    }
    ctx->pc = 0x1679ACu;
label_1679ac:
    // 0x1679ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1679ACu;
    {
        const bool branch_taken_0x1679ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1679B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1679ACu;
            // 0x1679b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1679ac) {
            ctx->pc = 0x1679BCu;
            goto label_1679bc;
        }
    }
    ctx->pc = 0x1679B4u;
    // 0x1679b4: 0xc0a71ec  jal         func_29C7B0
    ctx->pc = 0x1679B4u;
    SET_GPR_U32(ctx, 31, 0x1679BCu);
    ctx->pc = 0x1679B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1679B4u;
            // 0x1679b8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C7B0u;
    if (runtime->hasFunction(0x29C7B0u)) {
        auto targetFn = runtime->lookupFunction(0x29C7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1679BCu; }
        if (ctx->pc != 0x1679BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__9CObjAnimeFP12CObjAnimeEnv_0x29c7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1679BCu; }
        if (ctx->pc != 0x1679BCu) { return; }
    }
    ctx->pc = 0x1679BCu;
label_1679bc:
    // 0x1679bc: 0x0  nop
    ctx->pc = 0x1679bcu;
    // NOP
    // 0x1679c0: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1679c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1679c4: 0x1600fff4  bnez        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1679C4u;
    {
        const bool branch_taken_0x1679c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1679c4) {
            ctx->pc = 0x167998u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_167998;
        }
    }
    ctx->pc = 0x1679CCu;
label_1679cc:
    // 0x1679cc: 0x0  nop
    ctx->pc = 0x1679ccu;
    // NOP
    // 0x1679d0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1679d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1679d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1679d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1679d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1679d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1679dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1679dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1679e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1679e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1679e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1679E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1679E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1679E4u;
            // 0x1679e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1679ECu;
}
