#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetPartyCharaStatus__16CUserDataManagerFii
// Address: 0x19c750 - 0x19c8e4
void SetPartyCharaStatus__16CUserDataManagerFii_0x19c750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPartyCharaStatus__16CUserDataManagerFii_0x19c750");
#endif

    switch (ctx->pc) {
        case 0x19c788u: goto label_19c788;
        case 0x19c7e4u: goto label_19c7e4;
        default: break;
    }

    ctx->pc = 0x19c750u;

    // 0x19c750: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19c750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19c754: 0x24a7ffff  addiu       $a3, $a1, -0x1
    ctx->pc = 0x19c754u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x19c758: 0x4e0005f  bltz        $a3, . + 4 + (0x5F << 2)
    ctx->pc = 0x19C758u;
    {
        const bool branch_taken_0x19c758 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x19C75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C758u;
            // 0x19c75c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c758) {
            ctx->pc = 0x19C8D8u;
            goto label_19c8d8;
        }
    }
    ctx->pc = 0x19C760u;
    // 0x19c760: 0x28e30020  slti        $v1, $a3, 0x20
    ctx->pc = 0x19c760u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x19c764: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19C764u;
    {
        const bool branch_taken_0x19c764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C764u;
            // 0x19c768: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c764) {
            ctx->pc = 0x19C778u;
            goto label_19c778;
        }
    }
    ctx->pc = 0x19C76Cu;
    // 0x19c76c: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x19C76Cu;
    {
        const bool branch_taken_0x19c76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C76Cu;
            // 0x19c770: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c76c) {
            ctx->pc = 0x19C8DCu;
            goto label_19c8dc;
        }
    }
    ctx->pc = 0x19C774u;
    // 0x19c774: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x19c774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_19c778:
    // 0x19c778: 0x14c30005  bne         $a2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x19C778u;
    {
        const bool branch_taken_0x19c778 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x19c778) {
            ctx->pc = 0x19C790u;
            goto label_19c790;
        }
    }
    ctx->pc = 0x19C780u;
    // 0x19c780: 0xc0671b8  jal         func_19C6E0
    ctx->pc = 0x19C780u;
    SET_GPR_U32(ctx, 31, 0x19C788u);
    ctx->pc = 0x19C784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C780u;
            // 0x19c784: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C6E0u;
    if (runtime->hasFunction(0x19C6E0u)) {
        auto targetFn = runtime->lookupFunction(0x19C6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C788u; }
        if (ctx->pc != 0x19C788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        JoinPartyChara__16CUserDataManagerFiii_0x19c6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C788u; }
        if (ctx->pc != 0x19C788u) { return; }
    }
    ctx->pc = 0x19C788u;
label_19c788:
    // 0x19c788: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x19C788u;
    {
        const bool branch_taken_0x19c788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c788) {
            ctx->pc = 0x19C8D8u;
            goto label_19c8d8;
        }
    }
    ctx->pc = 0x19C790u;
label_19c790:
    // 0x19c790: 0x14c00008  bnez        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x19C790u;
    {
        const bool branch_taken_0x19c790 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C790u;
            // 0x19c794: 0x30c30001  andi        $v1, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c790) {
            ctx->pc = 0x19C7B4u;
            goto label_19c7b4;
        }
    }
    ctx->pc = 0x19C798u;
    // 0x19c798: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x19c798u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x19c79c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x19c79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x19c7a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19c7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19c7a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19c7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19c7a8: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x19C7A8u;
    {
        const bool branch_taken_0x19c7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C7ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C7A8u;
            // 0x19c7ac: 0xa4667db2  sh          $a2, 0x7DB2($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 32178), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c7a8) {
            ctx->pc = 0x19C8D8u;
            goto label_19c8d8;
        }
    }
    ctx->pc = 0x19C7B0u;
    // 0x19c7b0: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x19c7b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_19c7b4:
    // 0x19c7b4: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x19C7B4u;
    {
        const bool branch_taken_0x19c7b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c7b4) {
            ctx->pc = 0x19C864u;
            goto label_19c864;
        }
    }
    ctx->pc = 0x19C7BCu;
    // 0x19c7bc: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x19c7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x19c7c0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x19c7c0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c7c4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x19c7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x19c7c8: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x19c7c8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c7cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19c7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19c7d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19c7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19c7d4: 0x946a7db2  lhu         $t2, 0x7DB2($v1)
    ctx->pc = 0x19c7d4u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 32178)));
    // 0x19c7d8: 0x246e7db2  addiu       $t6, $v1, 0x7DB2
    ctx->pc = 0x19c7d8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), 32178));
    // 0x19c7dc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19c7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19c7e0: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x19c7e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_19c7e4:
    // 0x19c7e4: 0x8c1821  addu        $v1, $a0, $t4
    ctx->pc = 0x19c7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x19c7e8: 0x94697db2  lhu         $t1, 0x7DB2($v1)
    ctx->pc = 0x19c7e8u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 32178)));
    // 0x19c7ec: 0x1120000d  beqz        $t1, . + 4 + (0xD << 2)
    ctx->pc = 0x19C7ECu;
    {
        const bool branch_taken_0x19c7ec = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C7F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C7ECu;
            // 0x19c7f0: 0x246d7db2  addiu       $t5, $v1, 0x7DB2 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 32178));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c7ec) {
            ctx->pc = 0x19C824u;
            goto label_19c824;
        }
    }
    ctx->pc = 0x19C7F4u;
    // 0x19c7f4: 0x1167000b  beq         $t3, $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x19C7F4u;
    {
        const bool branch_taken_0x19c7f4 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 7));
        if (branch_taken_0x19c7f4) {
            ctx->pc = 0x19C824u;
            goto label_19c824;
        }
    }
    ctx->pc = 0x19C7FCu;
    // 0x19c7fc: 0x31230001  andi        $v1, $t1, 0x1
    ctx->pc = 0x19c7fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x19c800: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x19C800u;
    {
        const bool branch_taken_0x19c800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c800) {
            ctx->pc = 0x19C824u;
            goto label_19c824;
        }
    }
    ctx->pc = 0x19C808u;
    // 0x19c808: 0x31230004  andi        $v1, $t1, 0x4
    ctx->pc = 0x19c808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)4);
    // 0x19c80c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19C80Cu;
    {
        const bool branch_taken_0x19c80c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c80c) {
            ctx->pc = 0x19C81Cu;
            goto label_19c81c;
        }
    }
    ctx->pc = 0x19C814u;
    // 0x19c814: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19C814u;
    {
        const bool branch_taken_0x19c814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C814u;
            // 0x19c818: 0xa5a80000  sh          $t0, 0x0($t5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c814) {
            ctx->pc = 0x19C824u;
            goto label_19c824;
        }
    }
    ctx->pc = 0x19C81Cu;
label_19c81c:
    // 0x19c81c: 0x0  nop
    ctx->pc = 0x19c81cu;
    // NOP
    // 0x19c820: 0xa5a50000  sh          $a1, 0x0($t5)
    ctx->pc = 0x19c820u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 5));
label_19c824:
    // 0x19c824: 0x0  nop
    ctx->pc = 0x19c824u;
    // NOP
    // 0x19c828: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x19c828u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x19c82c: 0x29630020  slti        $v1, $t3, 0x20
    ctx->pc = 0x19c82cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x19c830: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x19C830u;
    {
        const bool branch_taken_0x19c830 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C830u;
            // 0x19c834: 0x258c000c  addiu       $t4, $t4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c830) {
            ctx->pc = 0x19C7E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19c7e4;
        }
    }
    ctx->pc = 0x19C838u;
    // 0x19c838: 0x31430004  andi        $v1, $t2, 0x4
    ctx->pc = 0x19c838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)4);
    // 0x19c83c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19C83Cu;
    {
        const bool branch_taken_0x19c83c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c83c) {
            ctx->pc = 0x19C858u;
            goto label_19c858;
        }
    }
    ctx->pc = 0x19C844u;
    // 0x19c844: 0x95c30000  lhu         $v1, 0x0($t6)
    ctx->pc = 0x19c844u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x19c848: 0x30c4ffff  andi        $a0, $a2, 0xFFFF
    ctx->pc = 0x19c848u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x19c84c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x19c84cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x19c850: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19C850u;
    {
        const bool branch_taken_0x19c850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C850u;
            // 0x19c854: 0xa5c30000  sh          $v1, 0x0($t6) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 14), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c850) {
            ctx->pc = 0x19C85Cu;
            goto label_19c85c;
        }
    }
    ctx->pc = 0x19C858u;
label_19c858:
    // 0x19c858: 0xa5c60000  sh          $a2, 0x0($t6)
    ctx->pc = 0x19c858u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 0), (uint16_t)GPR_U32(ctx, 6));
label_19c85c:
    // 0x19c85c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x19C85Cu;
    {
        const bool branch_taken_0x19c85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c85c) {
            ctx->pc = 0x19C8D8u;
            goto label_19c8d8;
        }
    }
    ctx->pc = 0x19C864u;
label_19c864:
    // 0x19c864: 0x30c70002  andi        $a3, $a2, 0x2
    ctx->pc = 0x19c864u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
    // 0x19c868: 0x14e00004  bnez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x19C868u;
    {
        const bool branch_taken_0x19c868 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x19c868) {
            ctx->pc = 0x19C87Cu;
            goto label_19c87c;
        }
    }
    ctx->pc = 0x19C870u;
    // 0x19c870: 0x30c30004  andi        $v1, $a2, 0x4
    ctx->pc = 0x19c870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
    // 0x19c874: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x19C874u;
    {
        const bool branch_taken_0x19c874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c874) {
            ctx->pc = 0x19C8D8u;
            goto label_19c8d8;
        }
    }
    ctx->pc = 0x19C87Cu;
label_19c87c:
    // 0x19c87c: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x19C87Cu;
    {
        const bool branch_taken_0x19c87c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C87Cu;
            // 0x19c880: 0x30c30004  andi        $v1, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c87c) {
            ctx->pc = 0x19C8A0u;
            goto label_19c8a0;
        }
    }
    ctx->pc = 0x19C884u;
    // 0x19c884: 0x24a7ffff  addiu       $a3, $a1, -0x1
    ctx->pc = 0x19c884u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x19c888: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x19c888u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x19c88c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x19c88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x19c890: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19c890u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19c894: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19c894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19c898: 0xa4667db2  sh          $a2, 0x7DB2($v1)
    ctx->pc = 0x19c898u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 32178), (uint16_t)GPR_U32(ctx, 6));
    // 0x19c89c: 0x30c30004  andi        $v1, $a2, 0x4
    ctx->pc = 0x19c89cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
label_19c8a0:
    // 0x19c8a0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x19C8A0u;
    {
        const bool branch_taken_0x19c8a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c8a0) {
            ctx->pc = 0x19C8D8u;
            goto label_19c8d8;
        }
    }
    ctx->pc = 0x19C8A8u;
    // 0x19c8a8: 0x24a7ffff  addiu       $a3, $a1, -0x1
    ctx->pc = 0x19c8a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x19c8ac: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x19c8acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x19c8b0: 0x30c5ffff  andi        $a1, $a2, 0xFFFF
    ctx->pc = 0x19c8b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x19c8b4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x19c8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x19c8b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19c8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19c8bc: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x19c8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19c8c0: 0x94837db2  lhu         $v1, 0x7DB2($a0)
    ctx->pc = 0x19c8c0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 32178)));
    // 0x19c8c4: 0x3063fffd  andi        $v1, $v1, 0xFFFD
    ctx->pc = 0x19c8c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65533);
    // 0x19c8c8: 0xa4837db2  sh          $v1, 0x7DB2($a0)
    ctx->pc = 0x19c8c8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 32178), (uint16_t)GPR_U32(ctx, 3));
    // 0x19c8cc: 0x94837db2  lhu         $v1, 0x7DB2($a0)
    ctx->pc = 0x19c8ccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 32178)));
    // 0x19c8d0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x19c8d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x19c8d4: 0xa4837db2  sh          $v1, 0x7DB2($a0)
    ctx->pc = 0x19c8d4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 32178), (uint16_t)GPR_U32(ctx, 3));
label_19c8d8:
    // 0x19c8d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c8d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19c8dc:
    // 0x19c8dc: 0x3e00008  jr          $ra
    ctx->pc = 0x19C8DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C8E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C8DCu;
            // 0x19c8e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19C8E4u;
}
