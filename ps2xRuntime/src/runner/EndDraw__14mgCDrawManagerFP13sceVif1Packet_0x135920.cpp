#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EndDraw__14mgCDrawManagerFP13sceVif1Packet
// Address: 0x135920 - 0x1359d0
void EndDraw__14mgCDrawManagerFP13sceVif1Packet_0x135920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EndDraw__14mgCDrawManagerFP13sceVif1Packet_0x135920");
#endif

    switch (ctx->pc) {
        case 0x135948u: goto label_135948;
        case 0x135954u: goto label_135954;
        case 0x135984u: goto label_135984;
        case 0x135998u: goto label_135998;
        default: break;
    }

    ctx->pc = 0x135920u;

    // 0x135920: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x135920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x135924: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x135924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x135928: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x135928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13592c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13592cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x135930: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x135930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x135934: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x135934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x135938: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x135938u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13593c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13593cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135940: 0xc04d53c  jal         func_1354F0
    ctx->pc = 0x135940u;
    SET_GPR_U32(ctx, 31, 0x135948u);
    ctx->pc = 0x1354F0u;
    if (runtime->hasFunction(0x1354F0u)) {
        auto targetFn = runtime->lookupFunction(0x1354F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135948u; }
        if (ctx->pc != 0x135948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PreEndDraw__14mgCDrawManagerFv_0x1354f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135948u; }
        if (ctx->pc != 0x135948u) { return; }
    }
    ctx->pc = 0x135948u;
label_135948:
    // 0x135948: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x135948u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13594c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x13594Cu;
    {
        const bool branch_taken_0x13594c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13594c) {
            ctx->pc = 0x13599Cu;
            goto label_13599c;
        }
    }
    ctx->pc = 0x135954u;
label_135954:
    // 0x135954: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x135954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x135958: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x135958u;
    {
        const bool branch_taken_0x135958 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x135958) {
            ctx->pc = 0x135970u;
            goto label_135970;
        }
    }
    ctx->pc = 0x135960u;
    // 0x135960: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x135960u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x135964: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x135964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x135968: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x135968u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13596c: 0x0  nop
    ctx->pc = 0x13596cu;
    // NOP
label_135970:
    // 0x135970: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135974: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x135974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135978: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x135978u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13597c: 0xc04d598  jal         func_135660
    ctx->pc = 0x13597Cu;
    SET_GPR_U32(ctx, 31, 0x135984u);
    ctx->pc = 0x135660u;
    if (runtime->hasFunction(0x135660u)) {
        auto targetFn = runtime->lookupFunction(0x135660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135984u; }
        if (ctx->pc != 0x135984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__14mgCDrawManagerFiP13sceVif1Packet_0x135660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135984u; }
        if (ctx->pc != 0x135984u) { return; }
    }
    ctx->pc = 0x135984u;
label_135984:
    // 0x135984: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135988: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x135988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13598c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x13598cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135990: 0xc04d5c8  jal         func_135720
    ctx->pc = 0x135990u;
    SET_GPR_U32(ctx, 31, 0x135998u);
    ctx->pc = 0x135720u;
    if (runtime->hasFunction(0x135720u)) {
        auto targetFn = runtime->lookupFunction(0x135720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135998u; }
        if (ctx->pc != 0x135998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__14mgCDrawManagerFiP13sceVif1Packet_0x135720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135998u; }
        if (ctx->pc != 0x135998u) { return; }
    }
    ctx->pc = 0x135998u;
label_135998:
    // 0x135998: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x135998u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_13599c:
    // 0x13599c: 0x0  nop
    ctx->pc = 0x13599cu;
    // NOP
    // 0x1359a0: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x1359a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1359a4: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x1359a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1359a8: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1359A8u;
    {
        const bool branch_taken_0x1359a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1359a8) {
            ctx->pc = 0x135954u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_135954;
        }
    }
    ctx->pc = 0x1359B0u;
    // 0x1359b0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1359b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1359b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1359b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1359b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1359b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1359bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1359bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1359c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1359c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1359c4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1359c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1359c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1359C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1359D0u;
}
