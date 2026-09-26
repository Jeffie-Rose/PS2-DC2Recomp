#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__7CSphidaFv
// Address: 0x2e9620 - 0x2e9718
void Initialize__7CSphidaFv_0x2e9620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__7CSphidaFv_0x2e9620");
#endif

    switch (ctx->pc) {
        case 0x2e9650u: goto label_2e9650;
        case 0x2e965cu: goto label_2e965c;
        case 0x2e9678u: goto label_2e9678;
        case 0x2e9680u: goto label_2e9680;
        case 0x2e96a0u: goto label_2e96a0;
        case 0x2e96dcu: goto label_2e96dc;
        default: break;
    }

    ctx->pc = 0x2e9620u;

    // 0x2e9620: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e9620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e9624: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e9624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e9628: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e9628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e962c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e962cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e9630: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2e9630u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9634: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e9634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e9638: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e9638u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e963c: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x2e963cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x2e9640: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e9640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9644: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x2e9644u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x2e9648: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x2e9648u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x2e964c: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x2e964cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
label_2e9650:
    // 0x2e9650: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x2e9650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x2e9654: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x2E9654u;
    SET_GPR_U32(ctx, 31, 0x2E965Cu);
    ctx->pc = 0x2E9658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9654u;
            // 0x2e9658: 0x24440040  addiu       $a0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E965Cu; }
        if (ctx->pc != 0x2E965Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E965Cu; }
        if (ctx->pc != 0x2E965Cu) { return; }
    }
    ctx->pc = 0x2E965Cu;
label_2e965c:
    // 0x2e965c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e965cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e9660: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x2e9660u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2e9664: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x2e9664u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2e9668: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2E9668u;
    {
        const bool branch_taken_0x2e9668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9668) {
            ctx->pc = 0x2E9650u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e9650;
        }
    }
    ctx->pc = 0x2E9670u;
    // 0x2e9670: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x2E9670u;
    SET_GPR_U32(ctx, 31, 0x2E9678u);
    ctx->pc = 0x2E9674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9670u;
            // 0x2e9674: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9678u; }
        if (ctx->pc != 0x2E9678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9678u; }
        if (ctx->pc != 0x2E9678u) { return; }
    }
    ctx->pc = 0x2E9678u;
label_2e9678:
    // 0x2e9678: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x2E9678u;
    SET_GPR_U32(ctx, 31, 0x2E9680u);
    ctx->pc = 0x2E967Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9678u;
            // 0x2e967c: 0x260400a0  addiu       $a0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9680u; }
        if (ctx->pc != 0x2E9680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9680u; }
        if (ctx->pc != 0x2E9680u) { return; }
    }
    ctx->pc = 0x2E9680u;
label_2e9680:
    // 0x2e9680: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x2e9680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
    // 0x2e9684: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e9684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9688: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x2e9688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x2e968c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2e968cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9690: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x2e9690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x2e9694: 0xae000208  sw          $zero, 0x208($s0)
    ctx->pc = 0x2e9694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 0));
    // 0x2e9698: 0xae000204  sw          $zero, 0x204($s0)
    ctx->pc = 0x2e9698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 0));
    // 0x2e969c: 0xae00020c  sw          $zero, 0x20C($s0)
    ctx->pc = 0x2e969cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 0));
label_2e96a0:
    // 0x2e96a0: 0x2032821  addu        $a1, $s0, $v1
    ctx->pc = 0x2e96a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2e96a4: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2e96a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2e96a8: 0xaca00210  sw          $zero, 0x210($a1)
    ctx->pc = 0x2e96a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 528), GPR_U32(ctx, 0));
    // 0x2e96ac: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2e96acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2e96b0: 0xaca00214  sw          $zero, 0x214($a1)
    ctx->pc = 0x2e96b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 532), GPR_U32(ctx, 0));
    // 0x2e96b4: 0xaca00218  sw          $zero, 0x218($a1)
    ctx->pc = 0x2e96b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 536), GPR_U32(ctx, 0));
    // 0x2e96b8: 0xaca0021c  sw          $zero, 0x21C($a1)
    ctx->pc = 0x2e96b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 540), GPR_U32(ctx, 0));
    // 0x2e96bc: 0xaca00220  sw          $zero, 0x220($a1)
    ctx->pc = 0x2e96bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 544), GPR_U32(ctx, 0));
    // 0x2e96c0: 0xaca00224  sw          $zero, 0x224($a1)
    ctx->pc = 0x2e96c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 548), GPR_U32(ctx, 0));
    // 0x2e96c4: 0xaca00228  sw          $zero, 0x228($a1)
    ctx->pc = 0x2e96c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 552), GPR_U32(ctx, 0));
    // 0x2e96c8: 0x1880fff5  blez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2E96C8u;
    {
        const bool branch_taken_0x2e96c8 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2E96CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E96C8u;
            // 0x2e96cc: 0xaca0022c  sw          $zero, 0x22C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 556), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e96c8) {
            ctx->pc = 0x2E96A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e96a0;
        }
    }
    ctx->pc = 0x2E96D0u;
    // 0x2e96d0: 0x28810009  slti        $at, $a0, 0x9
    ctx->pc = 0x2e96d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2e96d4: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E96D4u;
    {
        const bool branch_taken_0x2e96d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E96D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E96D4u;
            // 0x2e96d8: 0x42880  sll         $a1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e96d4) {
            ctx->pc = 0x2E96FCu;
            goto label_2e96fc;
        }
    }
    ctx->pc = 0x2E96DCu;
label_2e96dc:
    // 0x2e96dc: 0x2051821  addu        $v1, $s0, $a1
    ctx->pc = 0x2e96dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x2e96e0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2e96e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2e96e4: 0xac600210  sw          $zero, 0x210($v1)
    ctx->pc = 0x2e96e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 528), GPR_U32(ctx, 0));
    // 0x2e96e8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2e96e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2e96ec: 0x28830009  slti        $v1, $a0, 0x9
    ctx->pc = 0x2e96ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2e96f0: 0x0  nop
    ctx->pc = 0x2e96f0u;
    // NOP
    // 0x2e96f4: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2E96F4u;
    {
        const bool branch_taken_0x2e96f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e96f4) {
            ctx->pc = 0x2E96DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e96dc;
        }
    }
    ctx->pc = 0x2E96FCu;
label_2e96fc:
    // 0x2e96fc: 0x0  nop
    ctx->pc = 0x2e96fcu;
    // NOP
    // 0x2e9700: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e9700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e9704: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e9704u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e9708: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e9708u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e970c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e970cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e9710: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9710u;
            // 0x2e9714: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E9718u;
}
