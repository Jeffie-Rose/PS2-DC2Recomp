#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetDefColor__9CMapPartsFiPf
// Address: 0x1667f0 - 0x1668e0
void GetDefColor__9CMapPartsFiPf_0x1667f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetDefColor__9CMapPartsFiPf_0x1667f0");
#endif

    switch (ctx->pc) {
        case 0x166840u: goto label_166840;
        case 0x166854u: goto label_166854;
        case 0x166864u: goto label_166864;
        case 0x16688cu: goto label_16688c;
        default: break;
    }

    ctx->pc = 0x1667f0u;

    // 0x1667f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1667f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1667f4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1667f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1667f8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1667f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1667fc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1667fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x166800: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x166800u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166804: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x166804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x166808: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x166808u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16680c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16680cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x166810: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x166810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x166814: 0x6a00005  bltz        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x166814u;
    {
        const bool branch_taken_0x166814 = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x166818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166814u;
            // 0x166818: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166814) {
            ctx->pc = 0x16682Cu;
            goto label_16682c;
        }
    }
    ctx->pc = 0x16681Cu;
    // 0x16681c: 0x8c8201e8  lw          $v0, 0x1E8($a0)
    ctx->pc = 0x16681cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 488)));
    // 0x166820: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x166820u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x166824: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x166824u;
    {
        const bool branch_taken_0x166824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x166824) {
            ctx->pc = 0x166834u;
            goto label_166834;
        }
    }
    ctx->pc = 0x16682Cu;
label_16682c:
    // 0x16682c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x16682Cu;
    {
        const bool branch_taken_0x16682c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16682Cu;
            // 0x166830: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16682c) {
            ctx->pc = 0x1668BCu;
            goto label_1668bc;
        }
    }
    ctx->pc = 0x166834u;
label_166834:
    // 0x166834: 0x8c9000b0  lw          $s0, 0xB0($a0)
    ctx->pc = 0x166834u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x166838: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x166838u;
    {
        const bool branch_taken_0x166838 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x166838) {
            ctx->pc = 0x1668B4u;
            goto label_1668b4;
        }
    }
    ctx->pc = 0x166840u;
label_166840:
    // 0x166840: 0x8e13009c  lw          $s3, 0x9C($s0)
    ctx->pc = 0x166840u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x166844: 0x26120010  addiu       $s2, $s0, 0x10
    ctx->pc = 0x166844u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x166848: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x166848u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x16684c: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x16684Cu;
    {
        const bool branch_taken_0x16684c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x166850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16684Cu;
            // 0x166850: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16684c) {
            ctx->pc = 0x1668A4u;
            goto label_1668a4;
        }
    }
    ctx->pc = 0x166854u;
label_166854:
    // 0x166854: 0x0  nop
    ctx->pc = 0x166854u;
    // NOP
    // 0x166858: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x166858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16685c: 0xc05a18c  jal         func_168630
    ctx->pc = 0x16685Cu;
    SET_GPR_U32(ctx, 31, 0x166864u);
    ctx->pc = 0x166860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16685Cu;
            // 0x166860: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168630u;
    if (runtime->hasFunction(0x168630u)) {
        auto targetFn = runtime->lookupFunction(0x168630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166864u; }
        if (ctx->pc != 0x166864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMaterial__9CMapPieceFi_0x168630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166864u; }
        if (ctx->pc != 0x166864u) { return; }
    }
    ctx->pc = 0x166864u;
label_166864:
    // 0x166864: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x166864u;
    {
        const bool branch_taken_0x166864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166864) {
            ctx->pc = 0x166894u;
            goto label_166894;
        }
    }
    ctx->pc = 0x16686Cu;
    // 0x16686c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16686cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x166870: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x166870u;
    {
        const bool branch_taken_0x166870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x166870) {
            ctx->pc = 0x166894u;
            goto label_166894;
        }
    }
    ctx->pc = 0x166878u;
    // 0x166878: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x166878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x16687c: 0x16a30005  bne         $s5, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16687Cu;
    {
        const bool branch_taken_0x16687c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        ctx->pc = 0x166880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16687Cu;
            // 0x166880: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16687c) {
            ctx->pc = 0x166894u;
            goto label_166894;
        }
    }
    ctx->pc = 0x166884u;
    // 0x166884: 0xc041c5c  jal         func_107170
    ctx->pc = 0x166884u;
    SET_GPR_U32(ctx, 31, 0x16688Cu);
    ctx->pc = 0x166888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166884u;
            // 0x166888: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16688Cu; }
        if (ctx->pc != 0x16688Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16688Cu; }
        if (ctx->pc != 0x16688Cu) { return; }
    }
    ctx->pc = 0x16688Cu;
label_16688c:
    // 0x16688c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x16688Cu;
    {
        const bool branch_taken_0x16688c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16688Cu;
            // 0x166890: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16688c) {
            ctx->pc = 0x1668BCu;
            goto label_1668bc;
        }
    }
    ctx->pc = 0x166894u;
label_166894:
    // 0x166894: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x166894u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x166898: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x166898u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x16689c: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x16689Cu;
    {
        const bool branch_taken_0x16689c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16689c) {
            ctx->pc = 0x166854u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_166854;
        }
    }
    ctx->pc = 0x1668A4u;
label_1668a4:
    // 0x1668a4: 0x0  nop
    ctx->pc = 0x1668a4u;
    // NOP
    // 0x1668a8: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1668a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1668ac: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1668ACu;
    {
        const bool branch_taken_0x1668ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1668ac) {
            ctx->pc = 0x166840u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_166840;
        }
    }
    ctx->pc = 0x1668B4u;
label_1668b4:
    // 0x1668b4: 0x0  nop
    ctx->pc = 0x1668b4u;
    // NOP
    // 0x1668b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1668b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1668bc:
    // 0x1668bc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1668bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1668c0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1668c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1668c4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1668c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1668c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1668c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1668cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1668ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1668d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1668d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1668d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1668d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1668d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1668D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1668DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1668D8u;
            // 0x1668dc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1668E0u;
}
