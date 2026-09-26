#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: gcPARTY__FP9SPI_STACKi
// Address: 0x1942c0 - 0x194344
void gcPARTY__FP9SPI_STACKi_0x1942c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gcPARTY__FP9SPI_STACKi_0x1942c0");
#endif

    switch (ctx->pc) {
        case 0x1942d4u: goto label_1942d4;
        case 0x1942fcu: goto label_1942fc;
        case 0x19431cu: goto label_19431c;
        case 0x19432cu: goto label_19432c;
        default: break;
    }

    ctx->pc = 0x1942c0u;

    // 0x1942c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1942c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1942c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1942c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1942c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1942c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1942cc: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1942CCu;
    SET_GPR_U32(ctx, 31, 0x1942D4u);
    ctx->pc = 0x1942D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1942CCu;
            // 0x1942d0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1942D4u; }
        if (ctx->pc != 0x1942D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1942D4u; }
        if (ctx->pc != 0x1942D4u) { return; }
    }
    ctx->pc = 0x1942D4u;
label_1942d4:
    // 0x1942d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1942d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1942d8: 0x1a000004  blez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1942D8u;
    {
        const bool branch_taken_0x1942d8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1942DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1942D8u;
            // 0x1942dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1942d8) {
            ctx->pc = 0x1942ECu;
            goto label_1942ec;
        }
    }
    ctx->pc = 0x1942E0u;
    // 0x1942e0: 0x2a01001b  slti        $at, $s0, 0x1B
    ctx->pc = 0x1942e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x1942e4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1942E4u;
    {
        const bool branch_taken_0x1942e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1942e4) {
            ctx->pc = 0x1942F4u;
            goto label_1942f4;
        }
    }
    ctx->pc = 0x1942ECu;
label_1942ec:
    // 0x1942ec: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1942ECu;
    {
        const bool branch_taken_0x1942ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1942F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1942ECu;
            // 0x1942f0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1942ec) {
            ctx->pc = 0x194334u;
            goto label_194334;
        }
    }
    ctx->pc = 0x1942F4u;
label_1942f4:
    // 0x1942f4: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x1942F4u;
    SET_GPR_U32(ctx, 31, 0x1942FCu);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1942FCu; }
        if (ctx->pc != 0x1942FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1942FCu; }
        if (ctx->pc != 0x1942FCu) { return; }
    }
    ctx->pc = 0x1942FCu;
label_1942fc:
    // 0x1942fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1942fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194300: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x194300u;
    {
        const bool branch_taken_0x194300 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x194304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194300u;
            // 0x194304: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194300) {
            ctx->pc = 0x194330u;
            goto label_194330;
        }
    }
    ctx->pc = 0x194308u;
    // 0x194308: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x194308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19430c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19430cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194310: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x194310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x194314: 0xc0671b8  jal         func_19C6E0
    ctx->pc = 0x194314u;
    SET_GPR_U32(ctx, 31, 0x19431Cu);
    ctx->pc = 0x194318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194314u;
            // 0x194318: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C6E0u;
    if (runtime->hasFunction(0x19C6E0u)) {
        auto targetFn = runtime->lookupFunction(0x19C6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19431Cu; }
        if (ctx->pc != 0x19431Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        JoinPartyChara__16CUserDataManagerFiii_0x19c6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19431Cu; }
        if (ctx->pc != 0x19431Cu) { return; }
    }
    ctx->pc = 0x19431Cu;
label_19431c:
    // 0x19431c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19431cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194320: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x194320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194324: 0xc0671d4  jal         func_19C750
    ctx->pc = 0x194324u;
    SET_GPR_U32(ctx, 31, 0x19432Cu);
    ctx->pc = 0x194328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194324u;
            // 0x194328: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C750u;
    if (runtime->hasFunction(0x19C750u)) {
        auto targetFn = runtime->lookupFunction(0x19C750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19432Cu; }
        if (ctx->pc != 0x19432Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartyCharaStatus__16CUserDataManagerFii_0x19c750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19432Cu; }
        if (ctx->pc != 0x19432Cu) { return; }
    }
    ctx->pc = 0x19432Cu;
label_19432c:
    // 0x19432c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19432cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_194330:
    // 0x194330: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x194330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_194334:
    // 0x194334: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x194334u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194338: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x194338u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19433c: 0x3e00008  jr          $ra
    ctx->pc = 0x19433Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19433Cu;
            // 0x194340: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x194344u;
}
