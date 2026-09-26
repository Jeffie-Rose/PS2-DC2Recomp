#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Print__18MessageTaskManagerFPciii
// Address: 0x28b730 - 0x28b85c
void Print__18MessageTaskManagerFPciii_0x28b730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Print__18MessageTaskManagerFPciii_0x28b730");
#endif

    switch (ctx->pc) {
        case 0x28b770u: goto label_28b770;
        case 0x28b7b8u: goto label_28b7b8;
        case 0x28b804u: goto label_28b804;
        default: break;
    }

    ctx->pc = 0x28b730u;

    // 0x28b730: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x28b730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x28b734: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x28b734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x28b738: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28b738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x28b73c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28b73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28b740: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x28b740u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b744: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28b744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28b748: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x28b748u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b74c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28b74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28b750: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x28b750u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b754: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28b754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28b758: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x28b758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x28b75c: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x28B75Cu;
    {
        const bool branch_taken_0x28b75c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B75Cu;
            // 0x28b760: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b75c) {
            ctx->pc = 0x28B83Cu;
            goto label_28b83c;
        }
    }
    ctx->pc = 0x28B764u;
    // 0x28b764: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28b764u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b768: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28b768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b76c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28b76cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b770:
    // 0x28b770: 0x2861821  addu        $v1, $s4, $a2
    ctx->pc = 0x28b770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x28b774: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x28b774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x28b778: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x28B778u;
    {
        const bool branch_taken_0x28b778 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b778) {
            ctx->pc = 0x28B798u;
            goto label_28b798;
        }
    }
    ctx->pc = 0x28B780u;
    // 0x28b780: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x28b780u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x28b784: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28b784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28b788: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x28b788u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x28b78c: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x28b78cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x28b790: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28B790u;
    {
        const bool branch_taken_0x28b790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B790u;
            // 0x28b794: 0x24700008  addiu       $s0, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b790) {
            ctx->pc = 0x28B7A8u;
            goto label_28b7a8;
        }
    }
    ctx->pc = 0x28B798u;
label_28b798:
    // 0x28b798: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x28b798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x28b79c: 0x28830006  slti        $v1, $a0, 0x6
    ctx->pc = 0x28b79cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x28b7a0: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x28B7A0u;
    {
        const bool branch_taken_0x28b7a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B7A0u;
            // 0x28b7a4: 0x24c60090  addiu       $a2, $a2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b7a0) {
            ctx->pc = 0x28B770u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28b770;
        }
    }
    ctx->pc = 0x28B7A8u;
label_28b7a8:
    // 0x28b7a8: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x28B7A8u;
    {
        const bool branch_taken_0x28b7a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b7a8) {
            ctx->pc = 0x28B83Cu;
            goto label_28b83c;
        }
    }
    ctx->pc = 0x28B7B0u;
    // 0x28b7b0: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x28B7B0u;
    SET_GPR_U32(ctx, 31, 0x28B7B8u);
    ctx->pc = 0x28B7B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B7B0u;
            // 0x28b7b4: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B7B8u; }
        if (ctx->pc != 0x28B7B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B7B8u; }
        if (ctx->pc != 0x28B7B8u) { return; }
    }
    ctx->pc = 0x28B7B8u;
label_28b7b8:
    // 0x28b7b8: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x28b7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x28b7bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x28b7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x28b7c0: 0xa2110084  sb          $s1, 0x84($s0)
    ctx->pc = 0x28b7c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 132), (uint8_t)GPR_U32(ctx, 17));
    // 0x28b7c4: 0xa612008a  sh          $s2, 0x8A($s0)
    ctx->pc = 0x28b7c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 138), (uint16_t)GPR_U32(ctx, 18));
    // 0x28b7c8: 0xa6130086  sh          $s3, 0x86($s0)
    ctx->pc = 0x28b7c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 134), (uint16_t)GPR_U32(ctx, 19));
    // 0x28b7cc: 0xa6000088  sh          $zero, 0x88($s0)
    ctx->pc = 0x28b7ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 136), (uint16_t)GPR_U32(ctx, 0));
    // 0x28b7d0: 0x8e840368  lw          $a0, 0x368($s4)
    ctx->pc = 0x28b7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 872)));
    // 0x28b7d4: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28B7D4u;
    {
        const bool branch_taken_0x28b7d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b7d4) {
            ctx->pc = 0x28B7E8u;
            goto label_28b7e8;
        }
    }
    ctx->pc = 0x28B7DCu;
    // 0x28b7dc: 0xae900368  sw          $s0, 0x368($s4)
    ctx->pc = 0x28b7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 872), GPR_U32(ctx, 16));
    // 0x28b7e0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x28B7E0u;
    {
        const bool branch_taken_0x28b7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B7E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B7E0u;
            // 0x28b7e4: 0xae00008c  sw          $zero, 0x8C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b7e0) {
            ctx->pc = 0x28B83Cu;
            goto label_28b83c;
        }
    }
    ctx->pc = 0x28B7E8u;
label_28b7e8:
    // 0x28b7e8: 0x80830084  lb          $v1, 0x84($a0)
    ctx->pc = 0x28b7e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x28b7ec: 0x223082a  slt         $at, $s1, $v1
    ctx->pc = 0x28b7ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28b7f0: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x28B7F0u;
    {
        const bool branch_taken_0x28b7f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b7f0) {
            ctx->pc = 0x28B824u;
            goto label_28b824;
        }
    }
    ctx->pc = 0x28B7F8u;
    // 0x28b7f8: 0xae04008c  sw          $a0, 0x8C($s0)
    ctx->pc = 0x28b7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 4));
    // 0x28b7fc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x28B7FCu;
    {
        const bool branch_taken_0x28b7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B7FCu;
            // 0x28b800: 0xae900368  sw          $s0, 0x368($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 872), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b7fc) {
            ctx->pc = 0x28B83Cu;
            goto label_28b83c;
        }
    }
    ctx->pc = 0x28B804u;
label_28b804:
    // 0x28b804: 0x80a30084  lb          $v1, 0x84($a1)
    ctx->pc = 0x28b804u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 132)));
    // 0x28b808: 0x223082a  slt         $at, $s1, $v1
    ctx->pc = 0x28b808u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28b80c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x28B80Cu;
    {
        const bool branch_taken_0x28b80c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b80c) {
            ctx->pc = 0x28B820u;
            goto label_28b820;
        }
    }
    ctx->pc = 0x28B814u;
    // 0x28b814: 0xae05008c  sw          $a1, 0x8C($s0)
    ctx->pc = 0x28b814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 5));
    // 0x28b818: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28B818u;
    {
        const bool branch_taken_0x28b818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B818u;
            // 0x28b81c: 0xac90008c  sw          $s0, 0x8C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b818) {
            ctx->pc = 0x28B83Cu;
            goto label_28b83c;
        }
    }
    ctx->pc = 0x28B820u;
label_28b820:
    // 0x28b820: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x28b820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28b824:
    // 0x28b824: 0x0  nop
    ctx->pc = 0x28b824u;
    // NOP
    // 0x28b828: 0x8c85008c  lw          $a1, 0x8C($a0)
    ctx->pc = 0x28b828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x28b82c: 0x14a0fff5  bnez        $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x28B82Cu;
    {
        const bool branch_taken_0x28b82c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b82c) {
            ctx->pc = 0x28B804u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28b804;
        }
    }
    ctx->pc = 0x28B834u;
    // 0x28b834: 0xac90008c  sw          $s0, 0x8C($a0)
    ctx->pc = 0x28b834u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 16));
    // 0x28b838: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x28b838u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
label_28b83c:
    // 0x28b83c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x28b83cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28b840: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28b840u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28b844: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28b844u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28b848: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28b848u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28b84c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28b84cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28b850: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28b850u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28b854: 0x3e00008  jr          $ra
    ctx->pc = 0x28B854u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B854u;
            // 0x28b858: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28B85Cu;
}
