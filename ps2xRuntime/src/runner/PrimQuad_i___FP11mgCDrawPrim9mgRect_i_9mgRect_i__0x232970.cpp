#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PrimQuad<i>__FP11mgCDrawPrim9mgRect<i>9mgRect<i>
// Address: 0x232970 - 0x232a20
void PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970");
#endif

    switch (ctx->pc) {
        case 0x2329b4u: goto label_2329b4;
        case 0x2329ccu: goto label_2329cc;
        case 0x2329e8u: goto label_2329e8;
        case 0x232a08u: goto label_232a08;
        default: break;
    }

    ctx->pc = 0x232970u;

    // 0x232970: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x232970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x232974: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x232974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x232978: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x232978u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x23297c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23297cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x232980: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x232980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x232984: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x232984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x232988: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x232988u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23298c: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x23298cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x232990: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x232990u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x232994: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x232994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x232998: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x232998u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x23299c: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x23299Cu;
    {
        const bool branch_taken_0x23299c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2329A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23299Cu;
            // 0x2329a0: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23299c) {
            ctx->pc = 0x232A08u;
            goto label_232a08;
        }
    }
    ctx->pc = 0x2329A4u;
    // 0x2329a4: 0x8fb20054  lw          $s2, 0x54($sp)
    ctx->pc = 0x2329a4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2329a8: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x2329a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2329ac: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2329ACu;
    SET_GPR_U32(ctx, 31, 0x2329B4u);
    ctx->pc = 0x2329B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2329ACu;
            // 0x2329b0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2329B4u; }
        if (ctx->pc != 0x2329B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2329B4u; }
        if (ctx->pc != 0x2329B4u) { return; }
    }
    ctx->pc = 0x2329B4u;
label_2329b4:
    // 0x2329b4: 0x8fb00044  lw          $s0, 0x44($sp)
    ctx->pc = 0x2329b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2329b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2329b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2329bc: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2329bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2329c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2329c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2329c4: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x2329C4u;
    SET_GPR_U32(ctx, 31, 0x2329CCu);
    ctx->pc = 0x2329C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2329C4u;
            // 0x2329c8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2329CCu; }
        if (ctx->pc != 0x2329CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2329CCu; }
        if (ctx->pc != 0x2329CCu) { return; }
    }
    ctx->pc = 0x2329CCu;
label_2329cc:
    // 0x2329cc: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x2329ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2329d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2329d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2329d4: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x2329d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2329d8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2329d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2329dc: 0x2423021  addu        $a2, $s2, $v0
    ctx->pc = 0x2329dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2329e0: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2329E0u;
    SET_GPR_U32(ctx, 31, 0x2329E8u);
    ctx->pc = 0x2329E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2329E0u;
            // 0x2329e4: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2329E8u; }
        if (ctx->pc != 0x2329E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2329E8u; }
        if (ctx->pc != 0x2329E8u) { return; }
    }
    ctx->pc = 0x2329E8u;
label_2329e8:
    // 0x2329e8: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x2329e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2329ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2329ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2329f0: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2329f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2329f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2329f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2329f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2329f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2329fc: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x2329fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x232a00: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x232A00u;
    SET_GPR_U32(ctx, 31, 0x232A08u);
    ctx->pc = 0x232A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232A00u;
            // 0x232a04: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232A08u; }
        if (ctx->pc != 0x232A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232A08u; }
        if (ctx->pc != 0x232A08u) { return; }
    }
    ctx->pc = 0x232A08u;
label_232a08:
    // 0x232a08: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x232a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x232a0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x232a0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x232a10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x232a10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232a14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x232a14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232a18: 0x3e00008  jr          $ra
    ctx->pc = 0x232A18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232A18u;
            // 0x232a1c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x232A20u;
}
