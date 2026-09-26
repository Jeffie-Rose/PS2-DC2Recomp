#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CMRS_MOVE__FP12RS_STACKDATAi
// Address: 0x26f570 - 0x26f6b0
void ps2__CMRS_MOVE__FP12RS_STACKDATAi_0x26f570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CMRS_MOVE__FP12RS_STACKDATAi_0x26f570");
#endif

    switch (ctx->pc) {
        case 0x26f5a4u: goto label_26f5a4;
        case 0x26f5c8u: goto label_26f5c8;
        case 0x26f630u: goto label_26f630;
        case 0x26f63cu: goto label_26f63c;
        case 0x26f648u: goto label_26f648;
        case 0x26f65cu: goto label_26f65c;
        case 0x26f668u: goto label_26f668;
        case 0x26f674u: goto label_26f674;
        case 0x26f69cu: goto label_26f69c;
        default: break;
    }

    ctx->pc = 0x26f570u;

    // 0x26f570: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x26f570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x26f574: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x26f574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26f578: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26f578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26f57c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x26f57cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f580: 0x10a20033  beq         $a1, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x26F580u;
    {
        const bool branch_taken_0x26f580 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x26F584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F580u;
            // 0x26f584: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f580) {
            ctx->pc = 0x26F650u;
            goto label_26f650;
        }
    }
    ctx->pc = 0x26F588u;
    // 0x26f588: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26f588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26f58c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F58Cu;
    {
        const bool branch_taken_0x26f58c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x26f58c) {
            ctx->pc = 0x26F59Cu;
            goto label_26f59c;
        }
    }
    ctx->pc = 0x26F594u;
    // 0x26f594: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x26F594u;
    {
        const bool branch_taken_0x26f594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F594u;
            // 0x26f598: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f594) {
            ctx->pc = 0x26F67Cu;
            goto label_26f67c;
        }
    }
    ctx->pc = 0x26F59Cu;
label_26f59c:
    // 0x26f59c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26F59Cu;
    SET_GPR_U32(ctx, 31, 0x26F5A4u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F5A4u; }
        if (ctx->pc != 0x26F5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F5A4u; }
        if (ctx->pc != 0x26F5A4u) { return; }
    }
    ctx->pc = 0x26F5A4u;
label_26f5a4:
    // 0x26f5a4: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x26f5a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x26f5a8: 0x8c262a34  lw          $a2, 0x2A34($at)
    ctx->pc = 0x26f5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10804)));
    // 0x26f5ac: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F5ACu;
    {
        const bool branch_taken_0x26f5ac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F5B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F5ACu;
            // 0x26f5b0: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f5ac) {
            ctx->pc = 0x26F5BCu;
            goto label_26f5bc;
        }
    }
    ctx->pc = 0x26F5B4u;
    // 0x26f5b4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x26F5B4u;
    {
        const bool branch_taken_0x26f5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F5B4u;
            // 0x26f5b8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f5b4) {
            ctx->pc = 0x26F618u;
            goto label_26f618;
        }
    }
    ctx->pc = 0x26F5BCu;
label_26f5bc:
    // 0x26f5bc: 0x8c242a38  lw          $a0, 0x2A38($at)
    ctx->pc = 0x26f5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10808)));
    // 0x26f5c0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x26F5C0u;
    {
        const bool branch_taken_0x26f5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F5C0u;
            // 0x26f5c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f5c0) {
            ctx->pc = 0x26F5F0u;
            goto label_26f5f0;
        }
    }
    ctx->pc = 0x26F5C8u;
label_26f5c8:
    // 0x26f5c8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x26f5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x26f5cc: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x26F5CCu;
    {
        const bool branch_taken_0x26f5cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x26f5cc) {
            ctx->pc = 0x26F5FCu;
            goto label_26f5fc;
        }
    }
    ctx->pc = 0x26F5D4u;
    // 0x26f5d4: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x26f5d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x26f5d8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F5D8u;
    {
        const bool branch_taken_0x26f5d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f5d8) {
            ctx->pc = 0x26F5E8u;
            goto label_26f5e8;
        }
    }
    ctx->pc = 0x26F5E0u;
    // 0x26f5e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26F5E0u;
    {
        const bool branch_taken_0x26f5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F5E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F5E0u;
            // 0x26f5e4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f5e0) {
            ctx->pc = 0x26F5F0u;
            goto label_26f5f0;
        }
    }
    ctx->pc = 0x26F5E8u;
label_26f5e8:
    // 0x26f5e8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x26F5E8u;
    {
        const bool branch_taken_0x26f5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F5ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F5E8u;
            // 0x26f5ec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f5e8) {
            ctx->pc = 0x26F618u;
            goto label_26f618;
        }
    }
    ctx->pc = 0x26F5F0u;
label_26f5f0:
    // 0x26f5f0: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x26f5f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x26f5f4: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x26F5F4u;
    {
        const bool branch_taken_0x26f5f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f5f4) {
            ctx->pc = 0x26F5C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26f5c8;
        }
    }
    ctx->pc = 0x26F5FCu;
label_26f5fc:
    // 0x26f5fc: 0x0  nop
    ctx->pc = 0x26f5fcu;
    // NOP
    // 0x26f600: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F600u;
    {
        const bool branch_taken_0x26f600 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F600u;
            // 0x26f604: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f600) {
            ctx->pc = 0x26F610u;
            goto label_26f610;
        }
    }
    ctx->pc = 0x26F608u;
    // 0x26f608: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26F608u;
    {
        const bool branch_taken_0x26f608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f608) {
            ctx->pc = 0x26F618u;
            goto label_26f618;
        }
    }
    ctx->pc = 0x26F610u;
label_26f610:
    // 0x26f610: 0x8cd00004  lw          $s0, 0x4($a2)
    ctx->pc = 0x26f610u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x26f614: 0x0  nop
    ctx->pc = 0x26f614u;
    // NOP
label_26f618:
    // 0x26f618: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F618u;
    {
        const bool branch_taken_0x26f618 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F618u;
            // 0x26f61c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f618) {
            ctx->pc = 0x26F628u;
            goto label_26f628;
        }
    }
    ctx->pc = 0x26F620u;
    // 0x26f620: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x26F620u;
    {
        const bool branch_taken_0x26f620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F620u;
            // 0x26f624: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f620) {
            ctx->pc = 0x26F6A0u;
            goto label_26f6a0;
        }
    }
    ctx->pc = 0x26F628u;
label_26f628:
    // 0x26f628: 0xc097fa8  jal         func_25FEA0
    ctx->pc = 0x26F628u;
    SET_GPR_U32(ctx, 31, 0x26F630u);
    ctx->pc = 0x26F62Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F628u;
            // 0x26f62c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FEA0u;
    if (runtime->hasFunction(0x25FEA0u)) {
        auto targetFn = runtime->lookupFunction(0x25FEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F630u; }
        if (ctx->pc != 0x26F630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgVector__FPfP8ARG_DATA_0x25fea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F630u; }
        if (ctx->pc != 0x26F630u) { return; }
    }
    ctx->pc = 0x26F630u;
label_26f630:
    // 0x26f630: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x26f630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26f634: 0xc097fa8  jal         func_25FEA0
    ctx->pc = 0x26F634u;
    SET_GPR_U32(ctx, 31, 0x26F63Cu);
    ctx->pc = 0x26F638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F634u;
            // 0x26f638: 0x26050018  addiu       $a1, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FEA0u;
    if (runtime->hasFunction(0x25FEA0u)) {
        auto targetFn = runtime->lookupFunction(0x25FEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F63Cu; }
        if (ctx->pc != 0x26F63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgVector__FPfP8ARG_DATA_0x25fea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F63Cu; }
        if (ctx->pc != 0x26F63Cu) { return; }
    }
    ctx->pc = 0x26F63Cu;
label_26f63c:
    // 0x26f63c: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x26f63cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x26f640: 0xc097f6c  jal         func_25FDB0
    ctx->pc = 0x26F640u;
    SET_GPR_U32(ctx, 31, 0x26F648u);
    ctx->pc = 0x26F644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F640u;
            // 0x26f644: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F648u; }
        if (ctx->pc != 0x26F648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F648u; }
        if (ctx->pc != 0x26F648u) { return; }
    }
    ctx->pc = 0x26F648u;
label_26f648:
    // 0x26f648: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x26F648u;
    {
        const bool branch_taken_0x26f648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f648) {
            ctx->pc = 0x26F684u;
            goto label_26f684;
        }
    }
    ctx->pc = 0x26F650u;
label_26f650:
    // 0x26f650: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x26f650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26f654: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x26F654u;
    SET_GPR_U32(ctx, 31, 0x26F65Cu);
    ctx->pc = 0x26F658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F654u;
            // 0x26f658: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F65Cu; }
        if (ctx->pc != 0x26F65Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F65Cu; }
        if (ctx->pc != 0x26F65Cu) { return; }
    }
    ctx->pc = 0x26F65Cu;
label_26f65c:
    // 0x26f65c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x26f65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26f660: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x26F660u;
    SET_GPR_U32(ctx, 31, 0x26F668u);
    ctx->pc = 0x26F664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F660u;
            // 0x26f664: 0x24e50018  addiu       $a1, $a3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F668u; }
        if (ctx->pc != 0x26F668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F668u; }
        if (ctx->pc != 0x26F668u) { return; }
    }
    ctx->pc = 0x26F668u;
label_26f668:
    // 0x26f668: 0x24e70030  addiu       $a3, $a3, 0x30
    ctx->pc = 0x26f668u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x26f66c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26F66Cu;
    SET_GPR_U32(ctx, 31, 0x26F674u);
    ctx->pc = 0x26F670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F66Cu;
            // 0x26f670: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F674u; }
        if (ctx->pc != 0x26F674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F674u; }
        if (ctx->pc != 0x26F674u) { return; }
    }
    ctx->pc = 0x26F674u;
label_26f674:
    // 0x26f674: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26F674u;
    {
        const bool branch_taken_0x26f674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f674) {
            ctx->pc = 0x26F684u;
            goto label_26f684;
        }
    }
    ctx->pc = 0x26F67Cu;
label_26f67c:
    // 0x26f67c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x26F67Cu;
    {
        const bool branch_taken_0x26f67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F67Cu;
            // 0x26f680: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f67c) {
            ctx->pc = 0x26F6A4u;
            goto label_26f6a4;
        }
    }
    ctx->pc = 0x26F684u;
label_26f684:
    // 0x26f684: 0x3c0401ef  lui         $a0, 0x1EF
    ctx->pc = 0x26f684u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)495 << 16));
    // 0x26f688: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x26f688u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f68c: 0x2484f920  addiu       $a0, $a0, -0x6E0
    ctx->pc = 0x26f68cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965536));
    // 0x26f690: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x26f690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26f694: 0xc096750  jal         func_259D40
    ctx->pc = 0x26F694u;
    SET_GPR_U32(ctx, 31, 0x26F69Cu);
    ctx->pc = 0x26F698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F694u;
            // 0x26f698: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259D40u;
    if (runtime->hasFunction(0x259D40u)) {
        auto targetFn = runtime->lookupFunction(0x259D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F69Cu; }
        if (ctx->pc != 0x26F69Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Move__12CSceneCmrSeqFPfPfi_0x259d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F69Cu; }
        if (ctx->pc != 0x26F69Cu) { return; }
    }
    ctx->pc = 0x26F69Cu;
label_26f69c:
    // 0x26f69c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26f69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26f6a0:
    // 0x26f6a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26f6a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_26f6a4:
    // 0x26f6a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26f6a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26f6a8: 0x3e00008  jr          $ra
    ctx->pc = 0x26F6A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F6ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F6A8u;
            // 0x26f6ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26F6B0u;
}
