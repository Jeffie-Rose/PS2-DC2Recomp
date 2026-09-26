#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mlMAP_NAME_NUM__FP9SPI_STACKi
// Address: 0x2d2290 - 0x2d2358
void mlMAP_NAME_NUM__FP9SPI_STACKi_0x2d2290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mlMAP_NAME_NUM__FP9SPI_STACKi_0x2d2290");
#endif

    switch (ctx->pc) {
        case 0x2d22b0u: goto label_2d22b0;
        case 0x2d2310u: goto label_2d2310;
        case 0x2d2324u: goto label_2d2324;
        default: break;
    }

    ctx->pc = 0x2d2290u;

    // 0x2d2290: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d2290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d2294: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d2294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d2298: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d2298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d229c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d229cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d22a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d22a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d22a4: 0xaf809dcc  sw          $zero, -0x6234($gp)
    ctx->pc = 0x2d22a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942156), GPR_U32(ctx, 0));
    // 0x2d22a8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2D22A8u;
    SET_GPR_U32(ctx, 31, 0x2D22B0u);
    ctx->pc = 0x2D22ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D22A8u;
            // 0x2d22ac: 0xaf809dd0  sw          $zero, -0x6230($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D22B0u; }
        if (ctx->pc != 0x2D22B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D22B0u; }
        if (ctx->pc != 0x2D22B0u) { return; }
    }
    ctx->pc = 0x2D22B0u;
label_2d22b0:
    // 0x2d22b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d22b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d22b4: 0x8f869dcc  lw          $a2, -0x6234($gp)
    ctx->pc = 0x2d22b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942156)));
    // 0x2d22b8: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x2d22b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d22bc: 0x3c0501f1  lui         $a1, 0x1F1
    ctx->pc = 0x2d22bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)497 << 16));
    // 0x2d22c0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2d22c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2d22c4: 0x24a5d840  addiu       $a1, $a1, -0x27C0
    ctx->pc = 0x2d22c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957120));
    // 0x2d22c8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2d22c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d22cc: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2d22ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2d22d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d22d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d22d4: 0xaf909dc4  sw          $s0, -0x623C($gp)
    ctx->pc = 0x2d22d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942148), GPR_U32(ctx, 16));
    // 0x2d22d8: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x2d22d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x2d22dc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d22dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d22e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d22e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d22e4: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x2d22e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2d22e8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2d22e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2d22ec: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2d22ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2d22f0: 0xaf829dcc  sw          $v0, -0x6234($gp)
    ctx->pc = 0x2d22f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942156), GPR_U32(ctx, 2));
    // 0x2d22f4: 0x8f829dcc  lw          $v0, -0x6234($gp)
    ctx->pc = 0x2d22f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942156)));
    // 0x2d22f8: 0xaf849dc8  sw          $a0, -0x6238($gp)
    ctx->pc = 0x2d22f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942152), GPR_U32(ctx, 4));
    // 0x2d22fc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2d22fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2d2300: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2d2300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2d2304: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x2D2304u;
    {
        const bool branch_taken_0x2d2304 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2304u;
            // 0x2d2308: 0xaf829dd4  sw          $v0, -0x622C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2304) {
            ctx->pc = 0x2D2338u;
            goto label_2d2338;
        }
    }
    ctx->pc = 0x2D230Cu;
    // 0x2d230c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d230cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d2310:
    // 0x2d2310: 0x8f829dc8  lw          $v0, -0x6238($gp)
    ctx->pc = 0x2d2310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942152)));
    // 0x2d2314: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d2314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2318: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x2d2318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2d231c: 0xc049c86  jal         func_127218
    ctx->pc = 0x2D231Cu;
    SET_GPR_U32(ctx, 31, 0x2D2324u);
    ctx->pc = 0x2D2320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D231Cu;
            // 0x2d2320: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2324u; }
        if (ctx->pc != 0x2D2324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2324u; }
        if (ctx->pc != 0x2D2324u) { return; }
    }
    ctx->pc = 0x2D2324u;
label_2d2324:
    // 0x2d2324: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2d2324u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2d2328: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x2d2328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d232c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2d232cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d2330: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2D2330u;
    {
        const bool branch_taken_0x2d2330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2330u;
            // 0x2d2334: 0x2652001c  addiu       $s2, $s2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2330) {
            ctx->pc = 0x2D2310u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d2310;
        }
    }
    ctx->pc = 0x2D2338u;
label_2d2338:
    // 0x2d2338: 0xaf809dd8  sw          $zero, -0x6228($gp)
    ctx->pc = 0x2d2338u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942168), GPR_U32(ctx, 0));
    // 0x2d233c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d233cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2340: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d2340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2344: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d2344u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2348: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d2348u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d234c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d234cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2350: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2350u;
            // 0x2d2354: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D2358u;
}
