#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AddPacket__14mgCDrawManagerFiP1P1i
// Address: 0x1359d0 - 0x135ac8
void AddPacket__14mgCDrawManagerFiP1P1i_0x1359d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddPacket__14mgCDrawManagerFiP1P1i_0x1359d0");
#endif

    switch (ctx->pc) {
        case 0x135a68u: goto label_135a68;
        default: break;
    }

    ctx->pc = 0x1359d0u;

    // 0x1359d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1359d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1359d4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1359d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1359d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1359d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1359dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1359dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1359e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1359e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1359e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1359e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1359e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1359e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1359ec: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1359ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1359f0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1359f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1359f4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1359f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1359f8: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1359f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1359fc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1359fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x135a00: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x135a00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x135a04: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x135A04u;
    {
        const bool branch_taken_0x135a04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x135a04) {
            ctx->pc = 0x135AA4u;
            goto label_135aa4;
        }
    }
    ctx->pc = 0x135A0Cu;
    // 0x135a0c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x135a0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135a10: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x135a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x135a14: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x135A14u;
    {
        const bool branch_taken_0x135a14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x135a14) {
            ctx->pc = 0x135A58u;
            goto label_135a58;
        }
    }
    ctx->pc = 0x135A1Cu;
    // 0x135a1c: 0x4a10008  bgez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x135A1Cu;
    {
        const bool branch_taken_0x135a1c = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x135a1c) {
            ctx->pc = 0x135A40u;
            goto label_135a40;
        }
    }
    ctx->pc = 0x135A24u;
    // 0x135a24: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x135a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x135a28: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x135a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x135a2c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x135a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x135a30: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x135a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x135a34: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x135a34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x135a38: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x135A38u;
    {
        const bool branch_taken_0x135a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135a38) {
            ctx->pc = 0x135A50u;
            goto label_135a50;
        }
    }
    ctx->pc = 0x135A40u;
label_135a40:
    // 0x135a40: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x135a40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x135a44: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x135a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x135a48: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x135a48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x135a4c: 0x0  nop
    ctx->pc = 0x135a4cu;
    // NOP
label_135a50:
    // 0x135a50: 0x6000014  bltz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x135A50u;
    {
        const bool branch_taken_0x135a50 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x135a50) {
            ctx->pc = 0x135AA4u;
            goto label_135aa4;
        }
    }
    ctx->pc = 0x135A58u;
label_135a58:
    // 0x135a58: 0x8e840054  lw          $a0, 0x54($s4)
    ctx->pc = 0x135a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x135a5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x135a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x135a60: 0xc04e748  jal         func_139D20
    ctx->pc = 0x135A60u;
    SET_GPR_U32(ctx, 31, 0x135A68u);
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135A68u; }
        if (ctx->pc != 0x135A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135A68u; }
        if (ctx->pc != 0x135A68u) { return; }
    }
    ctx->pc = 0x135A68u;
label_135a68:
    // 0x135a68: 0x8e830050  lw          $v1, 0x50($s4)
    ctx->pc = 0x135a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
    // 0x135a6c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x135a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x135a70: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x135a70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x135a74: 0x8e830050  lw          $v1, 0x50($s4)
    ctx->pc = 0x135a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
    // 0x135a78: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x135a78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x135a7c: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x135a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x135a80: 0xac520004  sw          $s2, 0x4($v0)
    ctx->pc = 0x135a80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 18));
    // 0x135a84: 0xa450000c  sh          $s0, 0xC($v0)
    ctx->pc = 0x135a84u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 16));
    // 0x135a88: 0xa451000e  sh          $s1, 0xE($v0)
    ctx->pc = 0x135a88u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 17));
    // 0x135a8c: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x135a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x135a90: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x135a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x135a94: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x135a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x135a98: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x135a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x135a9c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x135a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x135aa0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x135aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_135aa4:
    // 0x135aa4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x135aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x135aa8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x135aa8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x135aac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x135aacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135ab0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x135ab0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135ab4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x135ab4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135ab8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x135ab8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135abc: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x135abcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x135ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x135AC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x135AC8u;
}
