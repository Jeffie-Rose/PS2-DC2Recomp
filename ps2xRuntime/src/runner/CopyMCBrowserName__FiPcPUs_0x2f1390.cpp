#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CopyMCBrowserName__FiPcPUs
// Address: 0x2f1390 - 0x2f141c
void CopyMCBrowserName__FiPcPUs_0x2f1390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CopyMCBrowserName__FiPcPUs_0x2f1390");
#endif

    switch (ctx->pc) {
        case 0x2f13e0u: goto label_2f13e0;
        default: break;
    }

    ctx->pc = 0x2f1390u;

    // 0x2f1390: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f1390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f1394: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f1394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f1398: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f1398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f139c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f139cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f13a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f13a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f13a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f13a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f13a8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2f13a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f13ac: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x2f13acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2f13b0: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F13B0u;
    {
        const bool branch_taken_0x2f13b0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2F13B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F13B0u;
            // 0x2f13b4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f13b0) {
            ctx->pc = 0x2F13BCu;
            goto label_2f13bc;
        }
    }
    ctx->pc = 0x2F13B8u;
    // 0x2f13b8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2f13b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f13bc:
    // 0x2f13bc: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x2f13bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x2f13c0: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2f13c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2f13c4: 0x2442ccd0  addiu       $v0, $v0, -0x3330
    ctx->pc = 0x2f13c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954192));
    // 0x2f13c8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2f13c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f13cc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2f13ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f13d0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2f13d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2f13d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f13d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f13d8: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2F13D8u;
    SET_GPR_U32(ctx, 31, 0x2F13E0u);
    ctx->pc = 0x2F13DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F13D8u;
            // 0x2f13dc: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F13E0u; }
        if (ctx->pc != 0x2F13E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F13E0u; }
        if (ctx->pc != 0x2F13E0u) { return; }
    }
    ctx->pc = 0x2F13E0u;
label_2f13e0:
    // 0x2f13e0: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F13E0u;
    {
        const bool branch_taken_0x2f13e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F13E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F13E0u;
            // 0x2f13e4: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f13e0) {
            ctx->pc = 0x2F1404u;
            goto label_2f1404;
        }
    }
    ctx->pc = 0x2F13E8u;
    // 0x2f13e8: 0x1028c0  sll         $a1, $s0, 3
    ctx->pc = 0x2f13e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2f13ec: 0x2484cd00  addiu       $a0, $a0, -0x3300
    ctx->pc = 0x2f13ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954240));
    // 0x2f13f0: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x2f13f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x2f13f4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2f13f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2f13f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2f13f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f13fc: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2f13fcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f1400: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x2f1400u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
label_2f1404:
    // 0x2f1404: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f1404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f1408: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f1408u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f140c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f140cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f1410: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f1410u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f1414: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1414u;
            // 0x2f1418: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F141Cu;
}
