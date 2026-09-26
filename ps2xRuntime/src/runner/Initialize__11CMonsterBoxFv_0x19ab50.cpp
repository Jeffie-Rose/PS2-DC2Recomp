#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__11CMonsterBoxFv
// Address: 0x19ab50 - 0x19ac3c
void Initialize__11CMonsterBoxFv_0x19ab50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__11CMonsterBoxFv_0x19ab50");
#endif

    switch (ctx->pc) {
        case 0x19ab6cu: goto label_19ab6c;
        case 0x19ab7cu: goto label_19ab7c;
        default: break;
    }

    ctx->pc = 0x19ab50u;

    // 0x19ab50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19ab50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19ab54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19ab54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ab58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19ab58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19ab5c: 0x24062f00  addiu       $a2, $zero, 0x2F00
    ctx->pc = 0x19ab5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12032));
    // 0x19ab60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19ab60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19ab64: 0xc049c86  jal         func_127218
    ctx->pc = 0x19AB64u;
    SET_GPR_U32(ctx, 31, 0x19AB6Cu);
    ctx->pc = 0x19AB68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19AB64u;
            // 0x19ab68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AB6Cu; }
        if (ctx->pc != 0x19AB6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AB6Cu; }
        if (ctx->pc != 0x19AB6Cu) { return; }
    }
    ctx->pc = 0x19AB6Cu;
label_19ab6c:
    // 0x19ab6c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x19ab6cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ab70: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x19ab70u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ab74: 0x3c0a4280  lui         $t2, 0x4280
    ctx->pc = 0x19ab74u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17024 << 16));
    // 0x19ab78: 0x3c0942c8  lui         $t1, 0x42C8
    ctx->pc = 0x19ab78u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17096 << 16));
label_19ab7c:
    // 0x19ab7c: 0x20c6821  addu        $t5, $s0, $t4
    ctx->pc = 0x19ab7cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 12)));
    // 0x19ab80: 0x25640001  addiu       $a0, $t3, 0x1
    ctx->pc = 0x19ab80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x19ab84: 0xa5ab0000  sh          $t3, 0x0($t5)
    ctx->pc = 0x19ab84u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x19ab88: 0x25630002  addiu       $v1, $t3, 0x2
    ctx->pc = 0x19ab88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x19ab8c: 0xadaa000c  sw          $t2, 0xC($t5)
    ctx->pc = 0x19ab8cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 10));
    // 0x19ab90: 0x25680003  addiu       $t0, $t3, 0x3
    ctx->pc = 0x19ab90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), 3));
    // 0x19ab94: 0xadaa0010  sw          $t2, 0x10($t5)
    ctx->pc = 0x19ab94u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 16), GPR_U32(ctx, 10));
    // 0x19ab98: 0x25670004  addiu       $a3, $t3, 0x4
    ctx->pc = 0x19ab98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x19ab9c: 0xada90014  sw          $t1, 0x14($t5)
    ctx->pc = 0x19ab9cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 20), GPR_U32(ctx, 9));
    // 0x19aba0: 0x25660005  addiu       $a2, $t3, 0x5
    ctx->pc = 0x19aba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 5));
    // 0x19aba4: 0xa5a400bc  sh          $a0, 0xBC($t5)
    ctx->pc = 0x19aba4u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 188), (uint16_t)GPR_U32(ctx, 4));
    // 0x19aba8: 0x25650006  addiu       $a1, $t3, 0x6
    ctx->pc = 0x19aba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 6));
    // 0x19abac: 0xadaa00c8  sw          $t2, 0xC8($t5)
    ctx->pc = 0x19abacu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 200), GPR_U32(ctx, 10));
    // 0x19abb0: 0x25640007  addiu       $a0, $t3, 0x7
    ctx->pc = 0x19abb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 7));
    // 0x19abb4: 0xadaa00cc  sw          $t2, 0xCC($t5)
    ctx->pc = 0x19abb4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 204), GPR_U32(ctx, 10));
    // 0x19abb8: 0x256b0008  addiu       $t3, $t3, 0x8
    ctx->pc = 0x19abb8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x19abbc: 0xada900d0  sw          $t1, 0xD0($t5)
    ctx->pc = 0x19abbcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 208), GPR_U32(ctx, 9));
    // 0x19abc0: 0x258c05e0  addiu       $t4, $t4, 0x5E0
    ctx->pc = 0x19abc0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1504));
    // 0x19abc4: 0xa5a30178  sh          $v1, 0x178($t5)
    ctx->pc = 0x19abc4u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 376), (uint16_t)GPR_U32(ctx, 3));
    // 0x19abc8: 0xadaa0184  sw          $t2, 0x184($t5)
    ctx->pc = 0x19abc8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 388), GPR_U32(ctx, 10));
    // 0x19abcc: 0x29630040  slti        $v1, $t3, 0x40
    ctx->pc = 0x19abccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x19abd0: 0xadaa0188  sw          $t2, 0x188($t5)
    ctx->pc = 0x19abd0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 392), GPR_U32(ctx, 10));
    // 0x19abd4: 0xada9018c  sw          $t1, 0x18C($t5)
    ctx->pc = 0x19abd4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 396), GPR_U32(ctx, 9));
    // 0x19abd8: 0xa5a80234  sh          $t0, 0x234($t5)
    ctx->pc = 0x19abd8u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 564), (uint16_t)GPR_U32(ctx, 8));
    // 0x19abdc: 0xadaa0240  sw          $t2, 0x240($t5)
    ctx->pc = 0x19abdcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 576), GPR_U32(ctx, 10));
    // 0x19abe0: 0xadaa0244  sw          $t2, 0x244($t5)
    ctx->pc = 0x19abe0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 580), GPR_U32(ctx, 10));
    // 0x19abe4: 0xada90248  sw          $t1, 0x248($t5)
    ctx->pc = 0x19abe4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 584), GPR_U32(ctx, 9));
    // 0x19abe8: 0xa5a702f0  sh          $a3, 0x2F0($t5)
    ctx->pc = 0x19abe8u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 752), (uint16_t)GPR_U32(ctx, 7));
    // 0x19abec: 0xadaa02fc  sw          $t2, 0x2FC($t5)
    ctx->pc = 0x19abecu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 764), GPR_U32(ctx, 10));
    // 0x19abf0: 0xadaa0300  sw          $t2, 0x300($t5)
    ctx->pc = 0x19abf0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 768), GPR_U32(ctx, 10));
    // 0x19abf4: 0xada90304  sw          $t1, 0x304($t5)
    ctx->pc = 0x19abf4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 772), GPR_U32(ctx, 9));
    // 0x19abf8: 0xa5a603ac  sh          $a2, 0x3AC($t5)
    ctx->pc = 0x19abf8u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 940), (uint16_t)GPR_U32(ctx, 6));
    // 0x19abfc: 0xadaa03b8  sw          $t2, 0x3B8($t5)
    ctx->pc = 0x19abfcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 952), GPR_U32(ctx, 10));
    // 0x19ac00: 0xadaa03bc  sw          $t2, 0x3BC($t5)
    ctx->pc = 0x19ac00u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 956), GPR_U32(ctx, 10));
    // 0x19ac04: 0xada903c0  sw          $t1, 0x3C0($t5)
    ctx->pc = 0x19ac04u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 960), GPR_U32(ctx, 9));
    // 0x19ac08: 0xa5a50468  sh          $a1, 0x468($t5)
    ctx->pc = 0x19ac08u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 1128), (uint16_t)GPR_U32(ctx, 5));
    // 0x19ac0c: 0xadaa0474  sw          $t2, 0x474($t5)
    ctx->pc = 0x19ac0cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 1140), GPR_U32(ctx, 10));
    // 0x19ac10: 0xadaa0478  sw          $t2, 0x478($t5)
    ctx->pc = 0x19ac10u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 1144), GPR_U32(ctx, 10));
    // 0x19ac14: 0xada9047c  sw          $t1, 0x47C($t5)
    ctx->pc = 0x19ac14u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 1148), GPR_U32(ctx, 9));
    // 0x19ac18: 0xa5a40524  sh          $a0, 0x524($t5)
    ctx->pc = 0x19ac18u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 1316), (uint16_t)GPR_U32(ctx, 4));
    // 0x19ac1c: 0xadaa0530  sw          $t2, 0x530($t5)
    ctx->pc = 0x19ac1cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 1328), GPR_U32(ctx, 10));
    // 0x19ac20: 0xadaa0534  sw          $t2, 0x534($t5)
    ctx->pc = 0x19ac20u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 1332), GPR_U32(ctx, 10));
    // 0x19ac24: 0x1460ffd5  bnez        $v1, . + 4 + (-0x2B << 2)
    ctx->pc = 0x19AC24u;
    {
        const bool branch_taken_0x19ac24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AC24u;
            // 0x19ac28: 0xada90538  sw          $t1, 0x538($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 1336), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ac24) {
            ctx->pc = 0x19AB7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19ab7c;
        }
    }
    ctx->pc = 0x19AC2Cu;
    // 0x19ac2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19ac2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ac30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19ac30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ac34: 0x3e00008  jr          $ra
    ctx->pc = 0x19AC34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AC34u;
            // 0x19ac38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19AC3Cu;
}
