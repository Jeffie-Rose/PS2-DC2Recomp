#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetFrameObjAlpha__10CEohMotherFiPcf
// Address: 0x25f6f0 - 0x25f7e8
void SetFrameObjAlpha__10CEohMotherFiPcf_0x25f6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetFrameObjAlpha__10CEohMotherFiPcf_0x25f6f0");
#endif

    switch (ctx->pc) {
        case 0x25f76cu: goto label_25f76c;
        case 0x25f788u: goto label_25f788;
        case 0x25f7acu: goto label_25f7ac;
        default: break;
    }

    ctx->pc = 0x25f6f0u;

    // 0x25f6f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25f6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25f6f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25f6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25f6f8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x25f6f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x25f6fc: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25F6FCu;
    {
        const bool branch_taken_0x25f6fc = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x25F700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F6FCu;
            // 0x25f700: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f6fc) {
            ctx->pc = 0x25F710u;
            goto label_25f710;
        }
    }
    ctx->pc = 0x25F704u;
    // 0x25f704: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x25f704u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x25f708: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F708u;
    {
        const bool branch_taken_0x25f708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F708u;
            // 0x25f70c: 0x51900  sll         $v1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f708) {
            ctx->pc = 0x25F718u;
            goto label_25f718;
        }
    }
    ctx->pc = 0x25F710u;
label_25f710:
    // 0x25f710: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x25F710u;
    {
        const bool branch_taken_0x25f710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F710u;
            // 0x25f714: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f710) {
            ctx->pc = 0x25F7D8u;
            goto label_25f7d8;
        }
    }
    ctx->pc = 0x25F718u;
label_25f718:
    // 0x25f718: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x25f718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25f71c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x25f71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25f720: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x25f720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25f724: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x25F724u;
    {
        const bool branch_taken_0x25f724 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25f724) {
            ctx->pc = 0x25F790u;
            goto label_25f790;
        }
    }
    ctx->pc = 0x25F72Cu;
    // 0x25f72c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F72Cu;
    {
        const bool branch_taken_0x25f72c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f72c) {
            ctx->pc = 0x25F73Cu;
            goto label_25f73c;
        }
    }
    ctx->pc = 0x25F734u;
    // 0x25f734: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x25F734u;
    {
        const bool branch_taken_0x25f734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F734u;
            // 0x25f738: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f734) {
            ctx->pc = 0x25F7D8u;
            goto label_25f7d8;
        }
    }
    ctx->pc = 0x25F73Cu;
label_25f73c:
    // 0x25f73c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x25f73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x25f740: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F740u;
    {
        const bool branch_taken_0x25f740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f740) {
            ctx->pc = 0x25F750u;
            goto label_25f750;
        }
    }
    ctx->pc = 0x25F748u;
    // 0x25f748: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x25F748u;
    {
        const bool branch_taken_0x25f748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F748u;
            // 0x25f74c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f748) {
            ctx->pc = 0x25F7D8u;
            goto label_25f7d8;
        }
    }
    ctx->pc = 0x25F750u;
label_25f750:
    // 0x25f750: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x25f750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x25f754: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F754u;
    {
        const bool branch_taken_0x25f754 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F754u;
            // 0x25f758: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f754) {
            ctx->pc = 0x25F764u;
            goto label_25f764;
        }
    }
    ctx->pc = 0x25F75Cu;
    // 0x25f75c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x25F75Cu;
    {
        const bool branch_taken_0x25f75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F75Cu;
            // 0x25f760: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f75c) {
            ctx->pc = 0x25F7D8u;
            goto label_25f7d8;
        }
    }
    ctx->pc = 0x25F764u;
label_25f764:
    // 0x25f764: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x25F764u;
    SET_GPR_U32(ctx, 31, 0x25F76Cu);
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F76Cu; }
        if (ctx->pc != 0x25F76Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F76Cu; }
        if (ctx->pc != 0x25F76Cu) { return; }
    }
    ctx->pc = 0x25F76Cu;
label_25f76c:
    // 0x25f76c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F76Cu;
    {
        const bool branch_taken_0x25f76c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F76Cu;
            // 0x25f770: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f76c) {
            ctx->pc = 0x25F77Cu;
            goto label_25f77c;
        }
    }
    ctx->pc = 0x25F774u;
    // 0x25f774: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x25F774u;
    {
        const bool branch_taken_0x25f774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F774u;
            // 0x25f778: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f774) {
            ctx->pc = 0x25F7D8u;
            goto label_25f7d8;
        }
    }
    ctx->pc = 0x25F77Cu;
label_25f77c:
    // 0x25f77c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25f77cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25f780: 0xc04df4c  jal         func_137D30
    ctx->pc = 0x25F780u;
    SET_GPR_U32(ctx, 31, 0x25F788u);
    ctx->pc = 0x25F784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25F780u;
            // 0x25f784: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x137D30u;
    if (runtime->hasFunction(0x137D30u)) {
        auto targetFn = runtime->lookupFunction(0x137D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F788u; }
        if (ctx->pc != 0x25F788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrParamObjAlpha__8mgCFrameFfi_0x137d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F788u; }
        if (ctx->pc != 0x25F788u) { return; }
    }
    ctx->pc = 0x25F788u;
label_25f788:
    // 0x25f788: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x25F788u;
    {
        const bool branch_taken_0x25f788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F788u;
            // 0x25f78c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f788) {
            ctx->pc = 0x25F7D8u;
            goto label_25f7d8;
        }
    }
    ctx->pc = 0x25F790u;
label_25f790:
    // 0x25f790: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x25f790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x25f794: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F794u;
    {
        const bool branch_taken_0x25f794 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F794u;
            // 0x25f798: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f794) {
            ctx->pc = 0x25F7A4u;
            goto label_25f7a4;
        }
    }
    ctx->pc = 0x25F79Cu;
    // 0x25f79c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x25F79Cu;
    {
        const bool branch_taken_0x25f79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F79Cu;
            // 0x25f7a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f79c) {
            ctx->pc = 0x25F7D8u;
            goto label_25f7d8;
        }
    }
    ctx->pc = 0x25F7A4u;
label_25f7a4:
    // 0x25f7a4: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x25F7A4u;
    SET_GPR_U32(ctx, 31, 0x25F7ACu);
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F7ACu; }
        if (ctx->pc != 0x25F7ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F7ACu; }
        if (ctx->pc != 0x25F7ACu) { return; }
    }
    ctx->pc = 0x25F7ACu;
label_25f7ac:
    // 0x25f7ac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F7ACu;
    {
        const bool branch_taken_0x25f7ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f7ac) {
            ctx->pc = 0x25F7BCu;
            goto label_25f7bc;
        }
    }
    ctx->pc = 0x25F7B4u;
    // 0x25f7b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25F7B4u;
    {
        const bool branch_taken_0x25f7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F7B4u;
            // 0x25f7b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f7b4) {
            ctx->pc = 0x25F7D8u;
            goto label_25f7d8;
        }
    }
    ctx->pc = 0x25F7BCu;
label_25f7bc:
    // 0x25f7bc: 0x8c4200f4  lw          $v0, 0xF4($v0)
    ctx->pc = 0x25f7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x25f7c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F7C0u;
    {
        const bool branch_taken_0x25f7c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f7c0) {
            ctx->pc = 0x25F7D0u;
            goto label_25f7d0;
        }
    }
    ctx->pc = 0x25F7C8u;
    // 0x25f7c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25F7C8u;
    {
        const bool branch_taken_0x25f7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F7C8u;
            // 0x25f7cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f7c8) {
            ctx->pc = 0x25F7D8u;
            goto label_25f7d8;
        }
    }
    ctx->pc = 0x25F7D0u;
label_25f7d0:
    // 0x25f7d0: 0xe4540044  swc1        $f20, 0x44($v0)
    ctx->pc = 0x25f7d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x25f7d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25f7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25f7d8:
    // 0x25f7d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25f7d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f7dc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x25f7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25f7e0: 0x3e00008  jr          $ra
    ctx->pc = 0x25F7E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F7E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F7E0u;
            // 0x25f7e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25F7E8u;
}
