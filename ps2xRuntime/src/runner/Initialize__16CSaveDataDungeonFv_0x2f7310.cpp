#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__16CSaveDataDungeonFv
// Address: 0x2f7310 - 0x2f73e8
void Initialize__16CSaveDataDungeonFv_0x2f7310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__16CSaveDataDungeonFv_0x2f7310");
#endif

    switch (ctx->pc) {
        case 0x2f7334u: goto label_2f7334;
        case 0x2f733cu: goto label_2f733c;
        case 0x2f7348u: goto label_2f7348;
        case 0x2f7370u: goto label_2f7370;
        default: break;
    }

    ctx->pc = 0x2f7310u;

    // 0x2f7310: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f7310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f7314: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f7314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7318: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f7318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f731c: 0x24060ca8  addiu       $a2, $zero, 0xCA8
    ctx->pc = 0x2f731cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3240));
    // 0x2f7320: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f7320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f7324: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f7324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f7328: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f7328u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f732c: 0xc049c86  jal         func_127218
    ctx->pc = 0x2F732Cu;
    SET_GPR_U32(ctx, 31, 0x2F7334u);
    ctx->pc = 0x2F7330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F732Cu;
            // 0x2f7330: 0x2604003c  addiu       $a0, $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7334u; }
        if (ctx->pc != 0x2F7334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7334u; }
        if (ctx->pc != 0x2F7334u) { return; }
    }
    ctx->pc = 0x2F7334u;
label_2f7334:
    // 0x2f7334: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2f7334u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7338: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f7338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f733c:
    // 0x2f733c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f733cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7340: 0xc0bdc7c  jal         func_2F71F0
    ctx->pc = 0x2F7340u;
    SET_GPR_U32(ctx, 31, 0x2F7348u);
    ctx->pc = 0x2F7344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7340u;
            // 0x2f7344: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F71F0u;
    if (runtime->hasFunction(0x2F71F0u)) {
        auto targetFn = runtime->lookupFunction(0x2F71F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7348u; }
        if (ctx->pc != 0x2F7348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFloorInfoPtr__16CSaveDataDungeonFii_0x2f71f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7348u; }
        if (ctx->pc != 0x2F7348u) { return; }
    }
    ctx->pc = 0x2F7348u;
label_2f7348:
    // 0x2f7348: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F7348u;
    {
        const bool branch_taken_0x2f7348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F734Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7348u;
            // 0x2f734c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7348) {
            ctx->pc = 0x2F735Cu;
            goto label_2f735c;
        }
    }
    ctx->pc = 0x2F7350u;
    // 0x2f7350: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2f7350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f7354: 0xa4440012  sh          $a0, 0x12($v0)
    ctx->pc = 0x2f7354u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 18), (uint16_t)GPR_U32(ctx, 4));
    // 0x2f7358: 0xa443000e  sh          $v1, 0xE($v0)
    ctx->pc = 0x2f7358u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 3));
label_2f735c:
    // 0x2f735c: 0x0  nop
    ctx->pc = 0x2f735cu;
    // NOP
    // 0x2f7360: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f7360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7364: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f7364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7368: 0xc0bdc7c  jal         func_2F71F0
    ctx->pc = 0x2F7368u;
    SET_GPR_U32(ctx, 31, 0x2F7370u);
    ctx->pc = 0x2F736Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7368u;
            // 0x2f736c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F71F0u;
    if (runtime->hasFunction(0x2F71F0u)) {
        auto targetFn = runtime->lookupFunction(0x2F71F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7370u; }
        if (ctx->pc != 0x2F7370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFloorInfoPtr__16CSaveDataDungeonFii_0x2f71f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7370u; }
        if (ctx->pc != 0x2F7370u) { return; }
    }
    ctx->pc = 0x2F7370u;
label_2f7370:
    // 0x2f7370: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F7370u;
    {
        const bool branch_taken_0x2f7370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7370u;
            // 0x2f7374: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7370) {
            ctx->pc = 0x2F737Cu;
            goto label_2f737c;
        }
    }
    ctx->pc = 0x2F7378u;
    // 0x2f7378: 0xa443000e  sh          $v1, 0xE($v0)
    ctx->pc = 0x2f7378u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 3));
label_2f737c:
    // 0x2f737c: 0x0  nop
    ctx->pc = 0x2f737cu;
    // NOP
    // 0x2f7380: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2f7380u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2f7384: 0x2a230007  slti        $v1, $s1, 0x7
    ctx->pc = 0x2f7384u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2f7388: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2F7388u;
    {
        const bool branch_taken_0x2f7388 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F738Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7388u;
            // 0x2f738c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7388) {
            ctx->pc = 0x2F733Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f733c;
        }
    }
    ctx->pc = 0x2F7390u;
    // 0x2f7390: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2f7390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f7394: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f7394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f7398: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x2f7398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x2f739c: 0xae040024  sw          $a0, 0x24($s0)
    ctx->pc = 0x2f739cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 4));
    // 0x2f73a0: 0xae040028  sw          $a0, 0x28($s0)
    ctx->pc = 0x2f73a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 4));
    // 0x2f73a4: 0xae04002c  sw          $a0, 0x2C($s0)
    ctx->pc = 0x2f73a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 4));
    // 0x2f73a8: 0xae040030  sw          $a0, 0x30($s0)
    ctx->pc = 0x2f73a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 4));
    // 0x2f73ac: 0xae040034  sw          $a0, 0x34($s0)
    ctx->pc = 0x2f73acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 4));
    // 0x2f73b0: 0xae040038  sw          $a0, 0x38($s0)
    ctx->pc = 0x2f73b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 4));
    // 0x2f73b4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x2f73b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x2f73b8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2f73b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2f73bc: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2f73bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x2f73c0: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x2f73c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x2f73c4: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x2f73c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x2f73c8: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x2f73c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x2f73cc: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x2f73ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x2f73d0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2f73d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2f73d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f73d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f73d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f73d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f73dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f73dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f73e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F73E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F73E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F73E0u;
            // 0x2f73e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F73E8u;
}
