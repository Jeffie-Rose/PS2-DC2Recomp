#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetScale__10CEohMotherFifff
// Address: 0x25e830 - 0x25e968
void SetScale__10CEohMotherFifff_0x25e830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetScale__10CEohMotherFifff_0x25e830");
#endif

    switch (ctx->pc) {
        case 0x25e830u: goto label_25e830;
        case 0x25e834u: goto label_25e834;
        case 0x25e838u: goto label_25e838;
        case 0x25e83cu: goto label_25e83c;
        case 0x25e840u: goto label_25e840;
        case 0x25e844u: goto label_25e844;
        case 0x25e848u: goto label_25e848;
        case 0x25e84cu: goto label_25e84c;
        case 0x25e850u: goto label_25e850;
        case 0x25e854u: goto label_25e854;
        case 0x25e858u: goto label_25e858;
        case 0x25e85cu: goto label_25e85c;
        case 0x25e860u: goto label_25e860;
        case 0x25e864u: goto label_25e864;
        case 0x25e868u: goto label_25e868;
        case 0x25e86cu: goto label_25e86c;
        case 0x25e870u: goto label_25e870;
        case 0x25e874u: goto label_25e874;
        case 0x25e878u: goto label_25e878;
        case 0x25e87cu: goto label_25e87c;
        case 0x25e880u: goto label_25e880;
        case 0x25e884u: goto label_25e884;
        case 0x25e888u: goto label_25e888;
        case 0x25e88cu: goto label_25e88c;
        case 0x25e890u: goto label_25e890;
        case 0x25e894u: goto label_25e894;
        case 0x25e898u: goto label_25e898;
        case 0x25e89cu: goto label_25e89c;
        case 0x25e8a0u: goto label_25e8a0;
        case 0x25e8a4u: goto label_25e8a4;
        case 0x25e8a8u: goto label_25e8a8;
        case 0x25e8acu: goto label_25e8ac;
        case 0x25e8b0u: goto label_25e8b0;
        case 0x25e8b4u: goto label_25e8b4;
        case 0x25e8b8u: goto label_25e8b8;
        case 0x25e8bcu: goto label_25e8bc;
        case 0x25e8c0u: goto label_25e8c0;
        case 0x25e8c4u: goto label_25e8c4;
        case 0x25e8c8u: goto label_25e8c8;
        case 0x25e8ccu: goto label_25e8cc;
        case 0x25e8d0u: goto label_25e8d0;
        case 0x25e8d4u: goto label_25e8d4;
        case 0x25e8d8u: goto label_25e8d8;
        case 0x25e8dcu: goto label_25e8dc;
        case 0x25e8e0u: goto label_25e8e0;
        case 0x25e8e4u: goto label_25e8e4;
        case 0x25e8e8u: goto label_25e8e8;
        case 0x25e8ecu: goto label_25e8ec;
        case 0x25e8f0u: goto label_25e8f0;
        case 0x25e8f4u: goto label_25e8f4;
        case 0x25e8f8u: goto label_25e8f8;
        case 0x25e8fcu: goto label_25e8fc;
        case 0x25e900u: goto label_25e900;
        case 0x25e904u: goto label_25e904;
        case 0x25e908u: goto label_25e908;
        case 0x25e90cu: goto label_25e90c;
        case 0x25e910u: goto label_25e910;
        case 0x25e914u: goto label_25e914;
        case 0x25e918u: goto label_25e918;
        case 0x25e91cu: goto label_25e91c;
        case 0x25e920u: goto label_25e920;
        case 0x25e924u: goto label_25e924;
        case 0x25e928u: goto label_25e928;
        case 0x25e92cu: goto label_25e92c;
        case 0x25e930u: goto label_25e930;
        case 0x25e934u: goto label_25e934;
        case 0x25e938u: goto label_25e938;
        case 0x25e93cu: goto label_25e93c;
        case 0x25e940u: goto label_25e940;
        case 0x25e944u: goto label_25e944;
        case 0x25e948u: goto label_25e948;
        case 0x25e94cu: goto label_25e94c;
        case 0x25e950u: goto label_25e950;
        case 0x25e954u: goto label_25e954;
        case 0x25e958u: goto label_25e958;
        case 0x25e95cu: goto label_25e95c;
        case 0x25e960u: goto label_25e960;
        case 0x25e964u: goto label_25e964;
        default: break;
    }

    ctx->pc = 0x25e830u;

label_25e830:
    // 0x25e830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25e830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_25e834:
    // 0x25e834: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_25e838:
    if (ctx->pc == 0x25E838u) {
        ctx->pc = 0x25E838u;
            // 0x25e838: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x25E83Cu;
        goto label_25e83c;
    }
    ctx->pc = 0x25E834u;
    {
        const bool branch_taken_0x25e834 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x25E838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E834u;
            // 0x25e838: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e834) {
            ctx->pc = 0x25E848u;
            goto label_25e848;
        }
    }
    ctx->pc = 0x25E83Cu;
label_25e83c:
    // 0x25e83c: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x25e83cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_25e840:
    // 0x25e840: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_25e844:
    if (ctx->pc == 0x25E844u) {
        ctx->pc = 0x25E844u;
            // 0x25e844: 0x51900  sll         $v1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x25E848u;
        goto label_25e848;
    }
    ctx->pc = 0x25E840u;
    {
        const bool branch_taken_0x25e840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E840u;
            // 0x25e844: 0x51900  sll         $v1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e840) {
            ctx->pc = 0x25E850u;
            goto label_25e850;
        }
    }
    ctx->pc = 0x25E848u;
label_25e848:
    // 0x25e848: 0x10000044  b           . + 4 + (0x44 << 2)
label_25e84c:
    if (ctx->pc == 0x25E84Cu) {
        ctx->pc = 0x25E84Cu;
            // 0x25e84c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25E850u;
        goto label_25e850;
    }
    ctx->pc = 0x25E848u;
    {
        const bool branch_taken_0x25e848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E848u;
            // 0x25e84c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e848) {
            ctx->pc = 0x25E95Cu;
            goto label_25e95c;
        }
    }
    ctx->pc = 0x25E850u;
label_25e850:
    // 0x25e850: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x25e850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_25e854:
    // 0x25e854: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x25e854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_25e858:
    // 0x25e858: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x25e858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25e85c:
    // 0x25e85c: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
label_25e860:
    if (ctx->pc == 0x25E860u) {
        ctx->pc = 0x25E860u;
            // 0x25e860: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x25E864u;
        goto label_25e864;
    }
    ctx->pc = 0x25E85Cu;
    {
        const bool branch_taken_0x25e85c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25E860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E85Cu;
            // 0x25e860: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e85c) {
            ctx->pc = 0x25E910u;
            goto label_25e910;
        }
    }
    ctx->pc = 0x25E864u;
label_25e864:
    // 0x25e864: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
label_25e868:
    if (ctx->pc == 0x25E868u) {
        ctx->pc = 0x25E868u;
            // 0x25e868: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x25E86Cu;
        goto label_25e86c;
    }
    ctx->pc = 0x25E864u;
    {
        const bool branch_taken_0x25e864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25E868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E864u;
            // 0x25e868: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e864) {
            ctx->pc = 0x25E8F4u;
            goto label_25e8f4;
        }
    }
    ctx->pc = 0x25E86Cu;
label_25e86c:
    // 0x25e86c: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
label_25e870:
    if (ctx->pc == 0x25E870u) {
        ctx->pc = 0x25E870u;
            // 0x25e870: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25E874u;
        goto label_25e874;
    }
    ctx->pc = 0x25E86Cu;
    {
        const bool branch_taken_0x25e86c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25E870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E86Cu;
            // 0x25e870: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e86c) {
            ctx->pc = 0x25E8E4u;
            goto label_25e8e4;
        }
    }
    ctx->pc = 0x25E874u;
label_25e874:
    // 0x25e874: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
label_25e878:
    if (ctx->pc == 0x25E878u) {
        ctx->pc = 0x25E87Cu;
        goto label_25e87c;
    }
    ctx->pc = 0x25E874u;
    {
        const bool branch_taken_0x25e874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25e874) {
            ctx->pc = 0x25E8B8u;
            goto label_25e8b8;
        }
    }
    ctx->pc = 0x25E87Cu;
label_25e87c:
    // 0x25e87c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_25e880:
    if (ctx->pc == 0x25E880u) {
        ctx->pc = 0x25E884u;
        goto label_25e884;
    }
    ctx->pc = 0x25E87Cu;
    {
        const bool branch_taken_0x25e87c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e87c) {
            ctx->pc = 0x25E88Cu;
            goto label_25e88c;
        }
    }
    ctx->pc = 0x25E884u;
label_25e884:
    // 0x25e884: 0x10000035  b           . + 4 + (0x35 << 2)
label_25e888:
    if (ctx->pc == 0x25E888u) {
        ctx->pc = 0x25E888u;
            // 0x25e888: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25E88Cu;
        goto label_25e88c;
    }
    ctx->pc = 0x25E884u;
    {
        const bool branch_taken_0x25e884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E884u;
            // 0x25e888: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e884) {
            ctx->pc = 0x25E95Cu;
            goto label_25e95c;
        }
    }
    ctx->pc = 0x25E88Cu;
label_25e88c:
    // 0x25e88c: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x25e88cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_25e890:
    // 0x25e890: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_25e894:
    if (ctx->pc == 0x25E894u) {
        ctx->pc = 0x25E894u;
            // 0x25e894: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25E898u;
        goto label_25e898;
    }
    ctx->pc = 0x25E890u;
    {
        const bool branch_taken_0x25e890 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E890u;
            // 0x25e894: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e890) {
            ctx->pc = 0x25E8A0u;
            goto label_25e8a0;
        }
    }
    ctx->pc = 0x25E898u;
label_25e898:
    // 0x25e898: 0x10000031  b           . + 4 + (0x31 << 2)
label_25e89c:
    if (ctx->pc == 0x25E89Cu) {
        ctx->pc = 0x25E89Cu;
            // 0x25e89c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x25E8A0u;
        goto label_25e8a0;
    }
    ctx->pc = 0x25E898u;
    {
        const bool branch_taken_0x25e898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E89Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E898u;
            // 0x25e89c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e898) {
            ctx->pc = 0x25E960u;
            goto label_25e960;
        }
    }
    ctx->pc = 0x25E8A0u;
label_25e8a0:
    // 0x25e8a0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x25e8a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25e8a4:
    // 0x25e8a4: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x25e8a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_25e8a8:
    // 0x25e8a8: 0x320f809  jalr        $t9
label_25e8ac:
    if (ctx->pc == 0x25E8ACu) {
        ctx->pc = 0x25E8B0u;
        goto label_25e8b0;
    }
    ctx->pc = 0x25E8A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25E8B0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x25E8B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25E8B0u; }
            if (ctx->pc != 0x25E8B0u) { return; }
        }
        }
    }
    ctx->pc = 0x25E8B0u;
label_25e8b0:
    // 0x25e8b0: 0x1000002a  b           . + 4 + (0x2A << 2)
label_25e8b4:
    if (ctx->pc == 0x25E8B4u) {
        ctx->pc = 0x25E8B4u;
            // 0x25e8b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25E8B8u;
        goto label_25e8b8;
    }
    ctx->pc = 0x25E8B0u;
    {
        const bool branch_taken_0x25e8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E8B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E8B0u;
            // 0x25e8b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e8b0) {
            ctx->pc = 0x25E95Cu;
            goto label_25e95c;
        }
    }
    ctx->pc = 0x25E8B8u;
label_25e8b8:
    // 0x25e8b8: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x25e8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_25e8bc:
    // 0x25e8bc: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_25e8c0:
    if (ctx->pc == 0x25E8C0u) {
        ctx->pc = 0x25E8C0u;
            // 0x25e8c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25E8C4u;
        goto label_25e8c4;
    }
    ctx->pc = 0x25E8BCu;
    {
        const bool branch_taken_0x25e8bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E8C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E8BCu;
            // 0x25e8c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e8bc) {
            ctx->pc = 0x25E8CCu;
            goto label_25e8cc;
        }
    }
    ctx->pc = 0x25E8C4u;
label_25e8c4:
    // 0x25e8c4: 0x10000025  b           . + 4 + (0x25 << 2)
label_25e8c8:
    if (ctx->pc == 0x25E8C8u) {
        ctx->pc = 0x25E8CCu;
        goto label_25e8cc;
    }
    ctx->pc = 0x25E8C4u;
    {
        const bool branch_taken_0x25e8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e8c4) {
            ctx->pc = 0x25E95Cu;
            goto label_25e95c;
        }
    }
    ctx->pc = 0x25E8CCu;
label_25e8cc:
    // 0x25e8cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x25e8ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25e8d0:
    // 0x25e8d0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x25e8d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_25e8d4:
    // 0x25e8d4: 0x320f809  jalr        $t9
label_25e8d8:
    if (ctx->pc == 0x25E8D8u) {
        ctx->pc = 0x25E8DCu;
        goto label_25e8dc;
    }
    ctx->pc = 0x25E8D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25E8DCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x25E8DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25E8DCu; }
            if (ctx->pc != 0x25E8DCu) { return; }
        }
        }
    }
    ctx->pc = 0x25E8DCu;
label_25e8dc:
    // 0x25e8dc: 0x1000001f  b           . + 4 + (0x1F << 2)
label_25e8e0:
    if (ctx->pc == 0x25E8E0u) {
        ctx->pc = 0x25E8E0u;
            // 0x25e8e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25E8E4u;
        goto label_25e8e4;
    }
    ctx->pc = 0x25E8DCu;
    {
        const bool branch_taken_0x25e8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E8E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E8DCu;
            // 0x25e8e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e8dc) {
            ctx->pc = 0x25E95Cu;
            goto label_25e95c;
        }
    }
    ctx->pc = 0x25E8E4u;
label_25e8e4:
    // 0x25e8e4: 0xc0a42f4  jal         func_290BD0
label_25e8e8:
    if (ctx->pc == 0x25E8E8u) {
        ctx->pc = 0x25E8E8u;
            // 0x25e8e8: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->pc = 0x25E8ECu;
        goto label_25e8ec;
    }
    ctx->pc = 0x25E8E4u;
    SET_GPR_U32(ctx, 31, 0x25E8ECu);
    ctx->pc = 0x25E8E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25E8E4u;
            // 0x25e8e8: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x290BD0u;
    if (runtime->hasFunction(0x290BD0u)) {
        auto targetFn = runtime->lookupFunction(0x290BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E8ECu; }
        if (ctx->pc != 0x25E8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScale__13CEventSprite2Fff_0x290bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E8ECu; }
        if (ctx->pc != 0x25E8ECu) { return; }
    }
    ctx->pc = 0x25E8ECu;
label_25e8ec:
    // 0x25e8ec: 0x1000001b  b           . + 4 + (0x1B << 2)
label_25e8f0:
    if (ctx->pc == 0x25E8F0u) {
        ctx->pc = 0x25E8F0u;
            // 0x25e8f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25E8F4u;
        goto label_25e8f4;
    }
    ctx->pc = 0x25E8ECu;
    {
        const bool branch_taken_0x25e8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E8F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E8ECu;
            // 0x25e8f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e8ec) {
            ctx->pc = 0x25E95Cu;
            goto label_25e95c;
        }
    }
    ctx->pc = 0x25E8F4u;
label_25e8f4:
    // 0x25e8f4: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x25e8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_25e8f8:
    // 0x25e8f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x25e8f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25e8fc:
    // 0x25e8fc: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x25e8fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_25e900:
    // 0x25e900: 0x320f809  jalr        $t9
label_25e904:
    if (ctx->pc == 0x25E904u) {
        ctx->pc = 0x25E908u;
        goto label_25e908;
    }
    ctx->pc = 0x25E900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25E908u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x25E908u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25E908u; }
            if (ctx->pc != 0x25E908u) { return; }
        }
        }
    }
    ctx->pc = 0x25E908u;
label_25e908:
    // 0x25e908: 0x10000014  b           . + 4 + (0x14 << 2)
label_25e90c:
    if (ctx->pc == 0x25E90Cu) {
        ctx->pc = 0x25E90Cu;
            // 0x25e90c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25E910u;
        goto label_25e910;
    }
    ctx->pc = 0x25E908u;
    {
        const bool branch_taken_0x25e908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E90Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E908u;
            // 0x25e90c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e908) {
            ctx->pc = 0x25E95Cu;
            goto label_25e95c;
        }
    }
    ctx->pc = 0x25E910u;
label_25e910:
    // 0x25e910: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x25e910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_25e914:
    // 0x25e914: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_25e918:
    if (ctx->pc == 0x25E918u) {
        ctx->pc = 0x25E918u;
            // 0x25e918: 0x2483000c  addiu       $v1, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->pc = 0x25E91Cu;
        goto label_25e91c;
    }
    ctx->pc = 0x25E914u;
    {
        const bool branch_taken_0x25e914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E914u;
            // 0x25e918: 0x2483000c  addiu       $v1, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e914) {
            ctx->pc = 0x25E924u;
            goto label_25e924;
        }
    }
    ctx->pc = 0x25E91Cu;
label_25e91c:
    // 0x25e91c: 0x1000000f  b           . + 4 + (0xF << 2)
label_25e920:
    if (ctx->pc == 0x25E920u) {
        ctx->pc = 0x25E920u;
            // 0x25e920: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25E924u;
        goto label_25e924;
    }
    ctx->pc = 0x25E91Cu;
    {
        const bool branch_taken_0x25e91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E91Cu;
            // 0x25e920: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e91c) {
            ctx->pc = 0x25E95Cu;
            goto label_25e95c;
        }
    }
    ctx->pc = 0x25E924u;
label_25e924:
    // 0x25e924: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x25e924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_25e928:
    // 0x25e928: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x25e928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_25e92c:
    // 0x25e92c: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x25e92cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_25e930:
    // 0x25e930: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x25e930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
label_25e934:
    // 0x25e934: 0xe7ad0014  swc1        $f13, 0x14($sp)
    ctx->pc = 0x25e934u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_25e938:
    // 0x25e938: 0xe7ae0018  swc1        $f14, 0x18($sp)
    ctx->pc = 0x25e938u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_25e93c:
    // 0x25e93c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x25e93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25e940:
    // 0x25e940: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x25e940u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_25e944:
    // 0x25e944: 0x7c6201a0  sq          $v0, 0x1A0($v1)
    ctx->pc = 0x25e944u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 416), GPR_VEC(ctx, 2));
label_25e948:
    // 0x25e948: 0x8c790070  lw          $t9, 0x70($v1)
    ctx->pc = 0x25e948u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_25e94c:
    // 0x25e94c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x25e94cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_25e950:
    // 0x25e950: 0x320f809  jalr        $t9
label_25e954:
    if (ctx->pc == 0x25E954u) {
        ctx->pc = 0x25E954u;
            // 0x25e954: 0x24640070  addiu       $a0, $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
        ctx->pc = 0x25E958u;
        goto label_25e958;
    }
    ctx->pc = 0x25E950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25E958u);
        ctx->pc = 0x25E954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E950u;
            // 0x25e954: 0x24640070  addiu       $a0, $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25E958u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25E958u; }
            if (ctx->pc != 0x25E958u) { return; }
        }
        }
    }
    ctx->pc = 0x25E958u;
label_25e958:
    // 0x25e958: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25e958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25e95c:
    // 0x25e95c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25e95cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25e960:
    // 0x25e960: 0x3e00008  jr          $ra
label_25e964:
    if (ctx->pc == 0x25E964u) {
        ctx->pc = 0x25E964u;
            // 0x25e964: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x25E968u;
        goto label_fallthrough_0x25e960;
    }
    ctx->pc = 0x25E960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E960u;
            // 0x25e964: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x25e960:
    ctx->pc = 0x25E968u;
}
