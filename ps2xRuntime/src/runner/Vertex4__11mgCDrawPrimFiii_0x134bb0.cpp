#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Vertex4__11mgCDrawPrimFiii
// Address: 0x134bb0 - 0x134c5c
void Vertex4__11mgCDrawPrimFiii_0x134bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Vertex4__11mgCDrawPrimFiii_0x134bb0");
#endif

    switch (ctx->pc) {
        case 0x134becu: goto label_134bec;
        default: break;
    }

    ctx->pc = 0x134bb0u;

    // 0x134bb0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x134bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x134bb4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x134bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x134bb8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x134bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x134bbc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x134bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x134bc0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x134bc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134bc4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x134bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x134bc8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x134bc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134bcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x134bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x134bd0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x134bd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134bd4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x134bd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134bd8: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x134bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x134bdc: 0x27a6005c  addiu       $a2, $sp, 0x5C
    ctx->pc = 0x134bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x134be0: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x134be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x134be4: 0xc04d450  jal         func_135140
    ctx->pc = 0x134BE4u;
    SET_GPR_U32(ctx, 31, 0x134BECu);
    ctx->pc = 0x134BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134BE4u;
            // 0x134be8: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135140u;
    if (runtime->hasFunction(0x135140u)) {
        auto targetFn = runtime->lookupFunction(0x135140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134BECu; }
        if (ctx->pc != 0x134BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetOffset__11mgCDrawPrimFPiPi_0x135140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134BECu; }
        if (ctx->pc != 0x134BECu) { return; }
    }
    ctx->pc = 0x134BECu;
label_134bec:
    // 0x134bec: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x134becu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x134bf0: 0x13183c  dsll32      $v1, $s3, 0
    ctx->pc = 0x134bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
    // 0x134bf4: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x134bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x134bf8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x134bf8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x134bfc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x134bfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x134c00: 0x8e4700dc  lw          $a3, 0xDC($s2)
    ctx->pc = 0x134c00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x134c04: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x134c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x134c08: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x134c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x134c0c: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x134c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x134c10: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x134c10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x134c14: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x134c14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x134c18: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x134c18u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x134c1c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x134c1cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x134c20: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x134c20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x134c24: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x134c24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x134c28: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x134c28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x134c2c: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x134c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x134c30: 0xfce30008  sd          $v1, 0x8($a3)
    ctx->pc = 0x134c30u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 3));
    // 0x134c34: 0x8e4300dc  lw          $v1, 0xDC($s2)
    ctx->pc = 0x134c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x134c38: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x134c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x134c3c: 0xae4300dc  sw          $v1, 0xDC($s2)
    ctx->pc = 0x134c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 3));
    // 0x134c40: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x134c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x134c44: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x134c44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x134c48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x134c48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x134c4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x134c4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x134c50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x134c50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134c54: 0x3e00008  jr          $ra
    ctx->pc = 0x134C54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134C54u;
            // 0x134c58: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x134C5Cu;
}
