#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EyeViewDrawOnOff__6CSceneFi
// Address: 0x2c81a0 - 0x2c8260
void EyeViewDrawOnOff__6CSceneFi_0x2c81a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EyeViewDrawOnOff__6CSceneFi_0x2c81a0");
#endif

    switch (ctx->pc) {
        case 0x2c81ccu: goto label_2c81cc;
        case 0x2c81e0u: goto label_2c81e0;
        case 0x2c81f8u: goto label_2c81f8;
        case 0x2c820cu: goto label_2c820c;
        default: break;
    }

    ctx->pc = 0x2c81a0u;

    // 0x2c81a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2c81a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2c81a4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2c81a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c81a8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2c81a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c81ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c81acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c81b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c81b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c81b4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2c81b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c81b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c81b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c81bc: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2c81bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2c81c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c81c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c81c4: 0xc0a1214  jal         func_284850
    ctx->pc = 0x2C81C4u;
    SET_GPR_U32(ctx, 31, 0x2C81CCu);
    ctx->pc = 0x2C81C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C81C4u;
            // 0x2c81c8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284850u;
    if (runtime->hasFunction(0x284850u)) {
        auto targetFn = runtime->lookupFunction(0x284850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C81CCu; }
        if (ctx->pc != 0x2C81CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveMap__6CSceneFPP4CMapi_0x284850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C81CCu; }
        if (ctx->pc != 0x2C81CCu) { return; }
    }
    ctx->pc = 0x2C81CCu;
label_2c81cc:
    // 0x2c81cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c81ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c81d0: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x2c81d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2c81d4: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x2C81D4u;
    {
        const bool branch_taken_0x2c81d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C81D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C81D4u;
            // 0x2c81d8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c81d4) {
            ctx->pc = 0x2C8240u;
            goto label_2c8240;
        }
    }
    ctx->pc = 0x2C81DCu;
    // 0x2c81dc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2c81dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c81e0:
    // 0x2c81e0: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x2c81e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x2c81e4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c81e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c81e8: 0x24520060  addiu       $s2, $v0, 0x60
    ctx->pc = 0x2c81e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2c81ec: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2c81ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c81f0: 0xc0571d4  jal         func_15C750
    ctx->pc = 0x2C81F0u;
    SET_GPR_U32(ctx, 31, 0x2C81F8u);
    ctx->pc = 0x2C81F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C81F0u;
            // 0x2c81f4: 0x24a5ffd8  addiu       $a1, $a1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C750u;
    if (runtime->hasFunction(0x15C750u)) {
        auto targetFn = runtime->lookupFunction(0x15C750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C81F8u; }
        if (ctx->pc != 0x2C81F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchPartsGroup__4CMapFPc_0x15c750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C81F8u; }
        if (ctx->pc != 0x2C81F8u) { return; }
    }
    ctx->pc = 0x2C81F8u;
label_2c81f8:
    // 0x2c81f8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2c81f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c81fc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c81fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c8200: 0x24a5ffe8  addiu       $a1, $a1, -0x18
    ctx->pc = 0x2c8200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967272));
    // 0x2c8204: 0xc0571d4  jal         func_15C750
    ctx->pc = 0x2C8204u;
    SET_GPR_U32(ctx, 31, 0x2C820Cu);
    ctx->pc = 0x2C8208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8204u;
            // 0x2c8208: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C750u;
    if (runtime->hasFunction(0x15C750u)) {
        auto targetFn = runtime->lookupFunction(0x15C750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C820Cu; }
        if (ctx->pc != 0x2C820Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchPartsGroup__4CMapFPc_0x15c750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C820Cu; }
        if (ctx->pc != 0x2C820Cu) { return; }
    }
    ctx->pc = 0x2C820Cu;
label_2c820c:
    // 0x2c820c: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C820Cu;
    {
        const bool branch_taken_0x2c820c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C820Cu;
            // 0x2c8210: 0x14182b  sltu        $v1, $zero, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c820c) {
            ctx->pc = 0x2C8220u;
            goto label_2c8220;
        }
    }
    ctx->pc = 0x2C8214u;
    // 0x2c8214: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2c8214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2c8218: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2c8218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2c821c: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x2c821cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
label_2c8220:
    // 0x2c8220: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C8220u;
    {
        const bool branch_taken_0x2c8220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8220) {
            ctx->pc = 0x2C822Cu;
            goto label_2c822c;
        }
    }
    ctx->pc = 0x2C8228u;
    // 0x2c8228: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x2c8228u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
label_2c822c:
    // 0x2c822c: 0x0  nop
    ctx->pc = 0x2c822cu;
    // NOP
    // 0x2c8230: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2c8230u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2c8234: 0x230182a  slt         $v1, $s1, $s0
    ctx->pc = 0x2c8234u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2c8238: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2C8238u;
    {
        const bool branch_taken_0x2c8238 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C823Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8238u;
            // 0x2c823c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8238) {
            ctx->pc = 0x2C81E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c81e0;
        }
    }
    ctx->pc = 0x2C8240u;
label_2c8240:
    // 0x2c8240: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c8240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c8244: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c8244u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c8248: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c8248u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c824c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c824cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c8250: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c8250u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c8254: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c8254u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c8258: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8258u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C825Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8258u;
            // 0x2c825c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C8260u;
}
