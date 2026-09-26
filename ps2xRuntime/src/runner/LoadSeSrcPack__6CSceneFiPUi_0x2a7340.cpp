#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadSeSrcPack__6CSceneFiPUi
// Address: 0x2a7340 - 0x2a7410
void LoadSeSrcPack__6CSceneFiPUi_0x2a7340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadSeSrcPack__6CSceneFiPUi_0x2a7340");
#endif

    switch (ctx->pc) {
        case 0x2a7368u: goto label_2a7368;
        case 0x2a7380u: goto label_2a7380;
        case 0x2a73d0u: goto label_2a73d0;
        default: break;
    }

    ctx->pc = 0x2a7340u;

    // 0x2a7340: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a7340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a7344: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a7344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a7348: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a7348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a734c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a734cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a7350: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2a7350u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7354: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a7354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a7358: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2a7358u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a735c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2a735cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7360: 0xc0a9ad4  jal         func_2A6B50
    ctx->pc = 0x2A7360u;
    SET_GPR_U32(ctx, 31, 0x2A7368u);
    ctx->pc = 0x2A7364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7360u;
            // 0x2a7364: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6B50u;
    if (runtime->hasFunction(0x2A6B50u)) {
        auto targetFn = runtime->lookupFunction(0x2A6B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7368u; }
        if (ctx->pc != 0x2A7368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLoadSeSrc__6CSceneFi_0x2a6b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7368u; }
        if (ctx->pc != 0x2A7368u) { return; }
    }
    ctx->pc = 0x2A7368u;
label_2a7368:
    // 0x2a7368: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A7368u;
    {
        const bool branch_taken_0x2a7368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A736Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7368u;
            // 0x2a736c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7368) {
            ctx->pc = 0x2A7378u;
            goto label_2a7378;
        }
    }
    ctx->pc = 0x2A7370u;
    // 0x2a7370: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2A7370u;
    {
        const bool branch_taken_0x2a7370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7370u;
            // 0x2a7374: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7370) {
            ctx->pc = 0x2A73F4u;
            goto label_2a73f4;
        }
    }
    ctx->pc = 0x2A7378u;
label_2a7378:
    // 0x2a7378: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2a7378u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a737c: 0x34049984  ori         $a0, $zero, 0x9984
    ctx->pc = 0x2a737cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39300);
label_2a7380:
    // 0x2a7380: 0x2631021  addu        $v0, $s3, $v1
    ctx->pc = 0x2a7380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2a7384: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2a7384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2a7388: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a7388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a738c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A738Cu;
    {
        const bool branch_taken_0x2a738c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2a738c) {
            ctx->pc = 0x2A739Cu;
            goto label_2a739c;
        }
    }
    ctx->pc = 0x2A7394u;
    // 0x2a7394: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2A7394u;
    {
        const bool branch_taken_0x2a7394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7394) {
            ctx->pc = 0x2A73B0u;
            goto label_2a73b0;
        }
    }
    ctx->pc = 0x2A739Cu;
label_2a739c:
    // 0x2a739c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2a739cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2a73a0: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x2a73a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2a73a4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2A73A4u;
    {
        const bool branch_taken_0x2a73a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A73A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A73A4u;
            // 0x2a73a8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a73a4) {
            ctx->pc = 0x2A7380u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a7380;
        }
    }
    ctx->pc = 0x2A73ACu;
    // 0x2a73ac: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x2a73acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a73b0:
    // 0x2a73b0: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A73B0u;
    {
        const bool branch_taken_0x2a73b0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2A73B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A73B0u;
            // 0x2a73b4: 0x34019dd0  ori         $at, $zero, 0x9DD0 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40400);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a73b0) {
            ctx->pc = 0x2A73C0u;
            goto label_2a73c0;
        }
    }
    ctx->pc = 0x2A73B8u;
    // 0x2a73b8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2A73B8u;
    {
        const bool branch_taken_0x2a73b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A73BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A73B8u;
            // 0x2a73bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a73b8) {
            ctx->pc = 0x2A73F4u;
            goto label_2a73f4;
        }
    }
    ctx->pc = 0x2A73C0u;
label_2a73c0:
    // 0x2a73c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a73c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a73c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a73c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a73c8: 0xc06368c  jal         func_18DA30
    ctx->pc = 0x2A73C8u;
    SET_GPR_U32(ctx, 31, 0x2A73D0u);
    ctx->pc = 0x2A73CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A73C8u;
            // 0x2a73cc: 0x2613021  addu        $a2, $s3, $at (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DA30u;
    if (runtime->hasFunction(0x18DA30u)) {
        auto targetFn = runtime->lookupFunction(0x18DA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A73D0u; }
        if (ctx->pc != 0x2A73D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndLoadSound__FiPUiP9mgCMemory_0x18da30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A73D0u; }
        if (ctx->pc != 0x2A73D0u) { return; }
    }
    ctx->pc = 0x2A73D0u;
label_2a73d0:
    // 0x2a73d0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2a73d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2a73d4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a73d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a73d8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2a73d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2a73dc: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x2a73dcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x2a73e0: 0xac229944  sw          $v0, -0x66BC($at)
    ctx->pc = 0x2a73e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294940996), GPR_U32(ctx, 2));
    // 0x2a73e4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a73e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a73e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a73e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a73ec: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x2a73ecu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x2a73f0: 0xac329984  sw          $s2, -0x667C($at)
    ctx->pc = 0x2a73f0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941060), GPR_U32(ctx, 18));
label_2a73f4:
    // 0x2a73f4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a73f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a73f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a73f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a73fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a73fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a7400: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a7400u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a7404: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a7404u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a7408: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A740Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7408u;
            // 0x2a740c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A7410u;
}
