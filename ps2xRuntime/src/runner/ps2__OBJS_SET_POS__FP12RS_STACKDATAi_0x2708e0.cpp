#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _OBJS_SET_POS__FP12RS_STACKDATAi
// Address: 0x2708e0 - 0x270a1c
void ps2__OBJS_SET_POS__FP12RS_STACKDATAi_0x2708e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__OBJS_SET_POS__FP12RS_STACKDATAi_0x2708e0");
#endif

    switch (ctx->pc) {
        case 0x270914u: goto label_270914;
        case 0x270938u: goto label_270938;
        case 0x2709a0u: goto label_2709a0;
        case 0x2709b0u: goto label_2709b0;
        case 0x2709c0u: goto label_2709c0;
        case 0x2709d0u: goto label_2709d0;
        case 0x2709ecu: goto label_2709ec;
        case 0x270a04u: goto label_270a04;
        default: break;
    }

    ctx->pc = 0x2708e0u;

    // 0x2708e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2708e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2708e4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2708e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2708e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2708e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2708ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2708ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2708f0: 0x10a20031  beq         $a1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2708F0u;
    {
        const bool branch_taken_0x2708f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2708F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2708F0u;
            // 0x2708f4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2708f0) {
            ctx->pc = 0x2709B8u;
            goto label_2709b8;
        }
    }
    ctx->pc = 0x2708F8u;
    // 0x2708f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2708f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2708fc: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2708FCu;
    {
        const bool branch_taken_0x2708fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2708fc) {
            ctx->pc = 0x27090Cu;
            goto label_27090c;
        }
    }
    ctx->pc = 0x270904u;
    // 0x270904: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x270904u;
    {
        const bool branch_taken_0x270904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270904u;
            // 0x270908: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270904) {
            ctx->pc = 0x2709D8u;
            goto label_2709d8;
        }
    }
    ctx->pc = 0x27090Cu;
label_27090c:
    // 0x27090c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27090Cu;
    SET_GPR_U32(ctx, 31, 0x270914u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270914u; }
        if (ctx->pc != 0x270914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270914u; }
        if (ctx->pc != 0x270914u) { return; }
    }
    ctx->pc = 0x270914u;
label_270914:
    // 0x270914: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x270914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x270918: 0x8c262a34  lw          $a2, 0x2A34($at)
    ctx->pc = 0x270918u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10804)));
    // 0x27091c: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x27091Cu;
    {
        const bool branch_taken_0x27091c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x270920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27091Cu;
            // 0x270920: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27091c) {
            ctx->pc = 0x27092Cu;
            goto label_27092c;
        }
    }
    ctx->pc = 0x270924u;
    // 0x270924: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x270924u;
    {
        const bool branch_taken_0x270924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270924u;
            // 0x270928: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270924) {
            ctx->pc = 0x270988u;
            goto label_270988;
        }
    }
    ctx->pc = 0x27092Cu;
label_27092c:
    // 0x27092c: 0x8c242a38  lw          $a0, 0x2A38($at)
    ctx->pc = 0x27092cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10808)));
    // 0x270930: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x270930u;
    {
        const bool branch_taken_0x270930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270930u;
            // 0x270934: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270930) {
            ctx->pc = 0x270960u;
            goto label_270960;
        }
    }
    ctx->pc = 0x270938u;
label_270938:
    // 0x270938: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x270938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x27093c: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x27093Cu;
    {
        const bool branch_taken_0x27093c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x27093c) {
            ctx->pc = 0x27096Cu;
            goto label_27096c;
        }
    }
    ctx->pc = 0x270944u;
    // 0x270944: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x270944u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x270948: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x270948u;
    {
        const bool branch_taken_0x270948 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x270948) {
            ctx->pc = 0x270958u;
            goto label_270958;
        }
    }
    ctx->pc = 0x270950u;
    // 0x270950: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x270950u;
    {
        const bool branch_taken_0x270950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270950u;
            // 0x270954: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270950) {
            ctx->pc = 0x270960u;
            goto label_270960;
        }
    }
    ctx->pc = 0x270958u;
label_270958:
    // 0x270958: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x270958u;
    {
        const bool branch_taken_0x270958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27095Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270958u;
            // 0x27095c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270958) {
            ctx->pc = 0x270988u;
            goto label_270988;
        }
    }
    ctx->pc = 0x270960u;
label_270960:
    // 0x270960: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x270960u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x270964: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x270964u;
    {
        const bool branch_taken_0x270964 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x270964) {
            ctx->pc = 0x270938u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_270938;
        }
    }
    ctx->pc = 0x27096Cu;
label_27096c:
    // 0x27096c: 0x0  nop
    ctx->pc = 0x27096cu;
    // NOP
    // 0x270970: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x270970u;
    {
        const bool branch_taken_0x270970 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x270974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270970u;
            // 0x270974: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270970) {
            ctx->pc = 0x270980u;
            goto label_270980;
        }
    }
    ctx->pc = 0x270978u;
    // 0x270978: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x270978u;
    {
        const bool branch_taken_0x270978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270978) {
            ctx->pc = 0x270988u;
            goto label_270988;
        }
    }
    ctx->pc = 0x270980u;
label_270980:
    // 0x270980: 0x8cd10004  lw          $s1, 0x4($a2)
    ctx->pc = 0x270980u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x270984: 0x0  nop
    ctx->pc = 0x270984u;
    // NOP
label_270988:
    // 0x270988: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x270988u;
    {
        const bool branch_taken_0x270988 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x27098Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270988u;
            // 0x27098c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270988) {
            ctx->pc = 0x270998u;
            goto label_270998;
        }
    }
    ctx->pc = 0x270990u;
    // 0x270990: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x270990u;
    {
        const bool branch_taken_0x270990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270990u;
            // 0x270994: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270990) {
            ctx->pc = 0x270A08u;
            goto label_270a08;
        }
    }
    ctx->pc = 0x270998u;
label_270998:
    // 0x270998: 0xc097f6c  jal         func_25FDB0
    ctx->pc = 0x270998u;
    SET_GPR_U32(ctx, 31, 0x2709A0u);
    ctx->pc = 0x27099Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270998u;
            // 0x27099c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2709A0u; }
        if (ctx->pc != 0x2709A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2709A0u; }
        if (ctx->pc != 0x2709A0u) { return; }
    }
    ctx->pc = 0x2709A0u;
label_2709a0:
    // 0x2709a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2709a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2709a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2709a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2709a8: 0xc097fa8  jal         func_25FEA0
    ctx->pc = 0x2709A8u;
    SET_GPR_U32(ctx, 31, 0x2709B0u);
    ctx->pc = 0x2709ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2709A8u;
            // 0x2709ac: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FEA0u;
    if (runtime->hasFunction(0x25FEA0u)) {
        auto targetFn = runtime->lookupFunction(0x25FEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2709B0u; }
        if (ctx->pc != 0x2709B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgVector__FPfP8ARG_DATA_0x25fea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2709B0u; }
        if (ctx->pc != 0x2709B0u) { return; }
    }
    ctx->pc = 0x2709B0u;
label_2709b0:
    // 0x2709b0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2709B0u;
    {
        const bool branch_taken_0x2709b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2709B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2709B0u;
            // 0x2709b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2709b0) {
            ctx->pc = 0x2709E4u;
            goto label_2709e4;
        }
    }
    ctx->pc = 0x2709B8u;
label_2709b8:
    // 0x2709b8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2709B8u;
    SET_GPR_U32(ctx, 31, 0x2709C0u);
    ctx->pc = 0x2709BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2709B8u;
            // 0x2709bc: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2709C0u; }
        if (ctx->pc != 0x2709C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2709C0u; }
        if (ctx->pc != 0x2709C0u) { return; }
    }
    ctx->pc = 0x2709C0u;
label_2709c0:
    // 0x2709c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2709c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2709c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2709c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2709c8: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x2709C8u;
    SET_GPR_U32(ctx, 31, 0x2709D0u);
    ctx->pc = 0x2709CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2709C8u;
            // 0x2709cc: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2709D0u; }
        if (ctx->pc != 0x2709D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2709D0u; }
        if (ctx->pc != 0x2709D0u) { return; }
    }
    ctx->pc = 0x2709D0u;
label_2709d0:
    // 0x2709d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2709D0u;
    {
        const bool branch_taken_0x2709d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2709d0) {
            ctx->pc = 0x2709E0u;
            goto label_2709e0;
        }
    }
    ctx->pc = 0x2709D8u;
label_2709d8:
    // 0x2709d8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2709D8u;
    {
        const bool branch_taken_0x2709d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2709DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2709D8u;
            // 0x2709dc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2709d8) {
            ctx->pc = 0x270A0Cu;
            goto label_270a0c;
        }
    }
    ctx->pc = 0x2709E0u;
label_2709e0:
    // 0x2709e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2709e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2709e4:
    // 0x2709e4: 0xc098a44  jal         func_262910
    ctx->pc = 0x2709E4u;
    SET_GPR_U32(ctx, 31, 0x2709ECu);
    ctx->pc = 0x262910u;
    if (runtime->hasFunction(0x262910u)) {
        auto targetFn = runtime->lookupFunction(0x262910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2709ECu; }
        if (ctx->pc != 0x2709ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetObjSeq__Fi_0x262910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2709ECu; }
        if (ctx->pc != 0x2709ECu) { return; }
    }
    ctx->pc = 0x2709ECu;
label_2709ec:
    // 0x2709ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2709ECu;
    {
        const bool branch_taken_0x2709ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2709F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2709ECu;
            // 0x2709f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2709ec) {
            ctx->pc = 0x2709FCu;
            goto label_2709fc;
        }
    }
    ctx->pc = 0x2709F4u;
    // 0x2709f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2709F4u;
    {
        const bool branch_taken_0x2709f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2709F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2709F4u;
            // 0x2709f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2709f4) {
            ctx->pc = 0x270A08u;
            goto label_270a08;
        }
    }
    ctx->pc = 0x2709FCu;
label_2709fc:
    // 0x2709fc: 0xc097254  jal         func_25C950
    ctx->pc = 0x2709FCu;
    SET_GPR_U32(ctx, 31, 0x270A04u);
    ctx->pc = 0x270A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2709FCu;
            // 0x270a00: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25C950u;
    if (runtime->hasFunction(0x25C950u)) {
        auto targetFn = runtime->lookupFunction(0x25C950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270A04u; }
        if (ctx->pc != 0x270A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__12CSceneObjSeqFPf_0x25c950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270A04u; }
        if (ctx->pc != 0x270A04u) { return; }
    }
    ctx->pc = 0x270A04u;
label_270a04:
    // 0x270a04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x270a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_270a08:
    // 0x270a08: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x270a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_270a0c:
    // 0x270a0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x270a0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x270a10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x270a10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x270a14: 0x3e00008  jr          $ra
    ctx->pc = 0x270A14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270A14u;
            // 0x270a18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x270A1Cu;
}
