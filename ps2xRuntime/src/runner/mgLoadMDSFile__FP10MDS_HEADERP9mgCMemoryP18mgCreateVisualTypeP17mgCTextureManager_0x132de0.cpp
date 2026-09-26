#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgLoadMDSFile__FP10MDS_HEADERP9mgCMemoryP18mgCreateVisualTypeP17mgCTextureManager
// Address: 0x132de0 - 0x132e58
void mgLoadMDSFile__FP10MDS_HEADERP9mgCMemoryP18mgCreateVisualTypeP17mgCTextureManager_0x132de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgLoadMDSFile__FP10MDS_HEADERP9mgCMemoryP18mgCreateVisualTypeP17mgCTextureManager_0x132de0");
#endif

    switch (ctx->pc) {
        case 0x132e1cu: goto label_132e1c;
        case 0x132e38u: goto label_132e38;
        default: break;
    }

    ctx->pc = 0x132de0u;

    // 0x132de0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x132de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x132de4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x132de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x132de8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x132de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x132dec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x132decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x132df0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x132df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x132df4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x132df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x132df8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x132df8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132dfc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x132dfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132e00: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x132e00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132e04: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x132e04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132e08: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x132e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x132e0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x132e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132e10: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x132e10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x132e14: 0xc049c86  jal         func_127218
    ctx->pc = 0x132E14u;
    SET_GPR_U32(ctx, 31, 0x132E1Cu);
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132E1Cu; }
        if (ctx->pc != 0x132E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132E1Cu; }
        if (ctx->pc != 0x132E1Cu) { return; }
    }
    ctx->pc = 0x132E1Cu;
label_132e1c:
    // 0x132e1c: 0xafb30050  sw          $s3, 0x50($sp)
    ctx->pc = 0x132e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 19));
    // 0x132e20: 0xafb20054  sw          $s2, 0x54($sp)
    ctx->pc = 0x132e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 18));
    // 0x132e24: 0xafb1005c  sw          $s1, 0x5C($sp)
    ctx->pc = 0x132e24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 17));
    // 0x132e28: 0xafb00060  sw          $s0, 0x60($sp)
    ctx->pc = 0x132e28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 16));
    // 0x132e2c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x132e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x132e30: 0xc04cb98  jal         func_132E60
    ctx->pc = 0x132E30u;
    SET_GPR_U32(ctx, 31, 0x132E38u);
    ctx->pc = 0x132E60u;
    if (runtime->hasFunction(0x132E60u)) {
        auto targetFn = runtime->lookupFunction(0x132E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132E38u; }
        if (ctx->pc != 0x132E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgLoadMDSFile__FP10mgLoadData_0x132e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132E38u; }
        if (ctx->pc != 0x132E38u) { return; }
    }
    ctx->pc = 0x132E38u;
label_132e38:
    // 0x132e38: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x132e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x132e3c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x132e3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x132e40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x132e40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x132e44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x132e44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132e48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x132e48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132e4c: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x132e4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x132e50: 0x3e00008  jr          $ra
    ctx->pc = 0x132E50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x132E58u;
}
