#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: UpdateCostumeList__15CMenuCostumeSelFiUl
// Address: 0x2bc6f0 - 0x2bc890
void UpdateCostumeList__15CMenuCostumeSelFiUl_0x2bc6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdateCostumeList__15CMenuCostumeSelFiUl_0x2bc6f0");
#endif

    switch (ctx->pc) {
        case 0x2bc718u: goto label_2bc718;
        case 0x2bc724u: goto label_2bc724;
        case 0x2bc73cu: goto label_2bc73c;
        case 0x2bc750u: goto label_2bc750;
        case 0x2bc764u: goto label_2bc764;
        case 0x2bc77cu: goto label_2bc77c;
        case 0x2bc788u: goto label_2bc788;
        case 0x2bc79cu: goto label_2bc79c;
        case 0x2bc7b0u: goto label_2bc7b0;
        case 0x2bc7c4u: goto label_2bc7c4;
        case 0x2bc804u: goto label_2bc804;
        case 0x2bc824u: goto label_2bc824;
        default: break;
    }

    ctx->pc = 0x2bc6f0u;

    // 0x2bc6f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2bc6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2bc6f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2bc6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2bc6f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2bc6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2bc6fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2bc6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2bc700: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2bc700u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc704: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bc704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2bc708: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2bc708u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc70c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bc70cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc710: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x2BC710u;
    SET_GPR_U32(ctx, 31, 0x2BC718u);
    ctx->pc = 0x2BC714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC710u;
            // 0x2bc714: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC718u; }
        if (ctx->pc != 0x2BC718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC718u; }
        if (ctx->pc != 0x2BC718u) { return; }
    }
    ctx->pc = 0x2BC718u;
label_2bc718:
    // 0x2bc718: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bc718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc71c: 0xc066d24  jal         func_19B490
    ctx->pc = 0x2BC71Cu;
    SET_GPR_U32(ctx, 31, 0x2BC724u);
    ctx->pc = 0x2BC720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC71Cu;
            // 0x2bc720: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B490u;
    if (runtime->hasFunction(0x19B490u)) {
        auto targetFn = runtime->lookupFunction(0x19B490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC724u; }
        if (ctx->pc != 0x2BC724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaDataPtr__16CUserDataManagerFi_0x19b490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC724u; }
        if (ctx->pc != 0x2BC724u) { return; }
    }
    ctx->pc = 0x2BC724u;
label_2bc724:
    // 0x2bc724: 0x16600010  bnez        $s3, . + 4 + (0x10 << 2)
    ctx->pc = 0x2BC724u;
    {
        const bool branch_taken_0x2bc724 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BC728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC724u;
            // 0x2bc728: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc724) {
            ctx->pc = 0x2BC768u;
            goto label_2bc768;
        }
    }
    ctx->pc = 0x2BC72Cu;
    // 0x2bc72c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bc72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc730: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2bc730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2bc734: 0xc0bcac8  jal         func_2F2B20
    ctx->pc = 0x2BC734u;
    SET_GPR_U32(ctx, 31, 0x2BC73Cu);
    ctx->pc = 0x2BC738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC734u;
            // 0x2bc738: 0x262601f4  addiu       $a2, $s1, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 500));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F2B20u;
    if (runtime->hasFunction(0x2F2B20u)) {
        auto targetFn = runtime->lookupFunction(0x2F2B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC73Cu; }
        if (ctx->pc != 0x2BC73Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCostumeList__FUliPs_0x2f2b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC73Cu; }
        if (ctx->pc != 0x2BC73Cu) { return; }
    }
    ctx->pc = 0x2BC73Cu;
label_2bc73c:
    // 0x2bc73c: 0xa62201d8  sh          $v0, 0x1D8($s1)
    ctx->pc = 0x2bc73cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 472), (uint16_t)GPR_U32(ctx, 2));
    // 0x2bc740: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bc740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc744: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2bc744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2bc748: 0xc0bcac8  jal         func_2F2B20
    ctx->pc = 0x2BC748u;
    SET_GPR_U32(ctx, 31, 0x2BC750u);
    ctx->pc = 0x2BC74Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC748u;
            // 0x2bc74c: 0x262601e4  addiu       $a2, $s1, 0x1E4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 484));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F2B20u;
    if (runtime->hasFunction(0x2F2B20u)) {
        auto targetFn = runtime->lookupFunction(0x2F2B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC750u; }
        if (ctx->pc != 0x2BC750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCostumeList__FUliPs_0x2f2b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC750u; }
        if (ctx->pc != 0x2BC750u) { return; }
    }
    ctx->pc = 0x2BC750u;
label_2bc750:
    // 0x2bc750: 0xa62201da  sh          $v0, 0x1DA($s1)
    ctx->pc = 0x2bc750u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 474), (uint16_t)GPR_U32(ctx, 2));
    // 0x2bc754: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bc754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc758: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2bc758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2bc75c: 0xc0bcac8  jal         func_2F2B20
    ctx->pc = 0x2BC75Cu;
    SET_GPR_U32(ctx, 31, 0x2BC764u);
    ctx->pc = 0x2BC760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC75Cu;
            // 0x2bc760: 0x26260204  addiu       $a2, $s1, 0x204 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 516));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F2B20u;
    if (runtime->hasFunction(0x2F2B20u)) {
        auto targetFn = runtime->lookupFunction(0x2F2B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC764u; }
        if (ctx->pc != 0x2BC764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCostumeList__FUliPs_0x2f2b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC764u; }
        if (ctx->pc != 0x2BC764u) { return; }
    }
    ctx->pc = 0x2BC764u;
label_2bc764:
    // 0x2bc764: 0xa62201dc  sh          $v0, 0x1DC($s1)
    ctx->pc = 0x2bc764u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 476), (uint16_t)GPR_U32(ctx, 2));
label_2bc768:
    // 0x2bc768: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bc768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bc76c: 0x16630016  bne         $s3, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2BC76Cu;
    {
        const bool branch_taken_0x2bc76c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        if (branch_taken_0x2bc76c) {
            ctx->pc = 0x2BC7C8u;
            goto label_2bc7c8;
        }
    }
    ctx->pc = 0x2BC774u;
    // 0x2bc774: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x2BC774u;
    SET_GPR_U32(ctx, 31, 0x2BC77Cu);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC77Cu; }
        if (ctx->pc != 0x2BC77Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC77Cu; }
        if (ctx->pc != 0x2BC77Cu) { return; }
    }
    ctx->pc = 0x2BC77Cu;
label_2bc77c:
    // 0x2bc77c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bc77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc780: 0xc066d24  jal         func_19B490
    ctx->pc = 0x2BC780u;
    SET_GPR_U32(ctx, 31, 0x2BC788u);
    ctx->pc = 0x2BC784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC780u;
            // 0x2bc784: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B490u;
    if (runtime->hasFunction(0x19B490u)) {
        auto targetFn = runtime->lookupFunction(0x19B490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC788u; }
        if (ctx->pc != 0x2BC788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaDataPtr__16CUserDataManagerFi_0x19b490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC788u; }
        if (ctx->pc != 0x2BC788u) { return; }
    }
    ctx->pc = 0x2BC788u;
label_2bc788:
    // 0x2bc788: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bc788u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc78c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bc78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc790: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2bc790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2bc794: 0xc0bcac8  jal         func_2F2B20
    ctx->pc = 0x2BC794u;
    SET_GPR_U32(ctx, 31, 0x2BC79Cu);
    ctx->pc = 0x2BC798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC794u;
            // 0x2bc798: 0x262601f4  addiu       $a2, $s1, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 500));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F2B20u;
    if (runtime->hasFunction(0x2F2B20u)) {
        auto targetFn = runtime->lookupFunction(0x2F2B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC79Cu; }
        if (ctx->pc != 0x2BC79Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCostumeList__FUliPs_0x2f2b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC79Cu; }
        if (ctx->pc != 0x2BC79Cu) { return; }
    }
    ctx->pc = 0x2BC79Cu;
label_2bc79c:
    // 0x2bc79c: 0xa62201d8  sh          $v0, 0x1D8($s1)
    ctx->pc = 0x2bc79cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 472), (uint16_t)GPR_U32(ctx, 2));
    // 0x2bc7a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bc7a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc7a4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2bc7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2bc7a8: 0xc0bcac8  jal         func_2F2B20
    ctx->pc = 0x2BC7A8u;
    SET_GPR_U32(ctx, 31, 0x2BC7B0u);
    ctx->pc = 0x2BC7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC7A8u;
            // 0x2bc7ac: 0x262601e4  addiu       $a2, $s1, 0x1E4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 484));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F2B20u;
    if (runtime->hasFunction(0x2F2B20u)) {
        auto targetFn = runtime->lookupFunction(0x2F2B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC7B0u; }
        if (ctx->pc != 0x2BC7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCostumeList__FUliPs_0x2f2b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC7B0u; }
        if (ctx->pc != 0x2BC7B0u) { return; }
    }
    ctx->pc = 0x2BC7B0u;
label_2bc7b0:
    // 0x2bc7b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bc7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc7b4: 0xa62201da  sh          $v0, 0x1DA($s1)
    ctx->pc = 0x2bc7b4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 474), (uint16_t)GPR_U32(ctx, 2));
    // 0x2bc7b8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2bc7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2bc7bc: 0xc0bcac8  jal         func_2F2B20
    ctx->pc = 0x2BC7BCu;
    SET_GPR_U32(ctx, 31, 0x2BC7C4u);
    ctx->pc = 0x2BC7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC7BCu;
            // 0x2bc7c0: 0x26260204  addiu       $a2, $s1, 0x204 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 516));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F2B20u;
    if (runtime->hasFunction(0x2F2B20u)) {
        auto targetFn = runtime->lookupFunction(0x2F2B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC7C4u; }
        if (ctx->pc != 0x2BC7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCostumeList__FUliPs_0x2f2b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC7C4u; }
        if (ctx->pc != 0x2BC7C4u) { return; }
    }
    ctx->pc = 0x2BC7C4u;
label_2bc7c4:
    // 0x2bc7c4: 0xa62201dc  sh          $v0, 0x1DC($s1)
    ctx->pc = 0x2bc7c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 476), (uint16_t)GPR_U32(ctx, 2));
label_2bc7c8:
    // 0x2bc7c8: 0x1200002a  beqz        $s0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2BC7C8u;
    {
        const bool branch_taken_0x2bc7c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC7C8u;
            // 0x2bc7cc: 0x3c030035  lui         $v1, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc7c8) {
            ctx->pc = 0x2BC874u;
            goto label_2bc874;
        }
    }
    ctx->pc = 0x2BC7D0u;
    // 0x2bc7d0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2bc7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2bc7d4: 0x24634cd0  addiu       $v1, $v1, 0x4CD0
    ctx->pc = 0x2bc7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19664));
    // 0x2bc7d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bc7d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc7dc: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2bc7dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bc7e0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2bc7e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc7e4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2bc7e4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc7e8: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2bc7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2bc7ec: 0x8603024a  lh          $v1, 0x24A($s0)
    ctx->pc = 0x2bc7ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 586)));
    // 0x2bc7f0: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x2bc7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x2bc7f4: 0x86030322  lh          $v1, 0x322($s0)
    ctx->pc = 0x2bc7f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 802)));
    // 0x2bc7f8: 0xafa30054  sw          $v1, 0x54($sp)
    ctx->pc = 0x2bc7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
    // 0x2bc7fc: 0x860302b6  lh          $v1, 0x2B6($s0)
    ctx->pc = 0x2bc7fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 694)));
    // 0x2bc800: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x2bc800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
label_2bc804:
    // 0x2bc804: 0x22a6821  addu        $t5, $s1, $t2
    ctx->pc = 0x2bc804u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 10)));
    // 0x2bc808: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2bc808u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc80c: 0xa5a001de  sh          $zero, 0x1DE($t5)
    ctx->pc = 0x2bc80cu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 478), (uint16_t)GPR_U32(ctx, 0));
    // 0x2bc810: 0x25ac01de  addiu       $t4, $t5, 0x1DE
    ctx->pc = 0x2bc810u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), 478));
    // 0x2bc814: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2bc814u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc818: 0x17d3021  addu        $a2, $t3, $sp
    ctx->pc = 0x2bc818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 29)));
    // 0x2bc81c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2BC81Cu;
    {
        const bool branch_taken_0x2bc81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC81Cu;
            // 0x2bc820: 0x22b2021  addu        $a0, $s1, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc81c) {
            ctx->pc = 0x2BC850u;
            goto label_2bc850;
        }
    }
    ctx->pc = 0x2BC824u;
label_2bc824:
    // 0x2bc824: 0x0  nop
    ctx->pc = 0x2bc824u;
    // NOP
    // 0x2bc828: 0x8c830214  lw          $v1, 0x214($a0)
    ctx->pc = 0x2bc828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 532)));
    // 0x2bc82c: 0x8cc50050  lw          $a1, 0x50($a2)
    ctx->pc = 0x2bc82cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x2bc830: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2bc830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2bc834: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x2bc834u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bc838: 0x14a30002  bne         $a1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BC838u;
    {
        const bool branch_taken_0x2bc838 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2bc838) {
            ctx->pc = 0x2BC844u;
            goto label_2bc844;
        }
    }
    ctx->pc = 0x2BC840u;
    // 0x2bc840: 0xa5880000  sh          $t0, 0x0($t4)
    ctx->pc = 0x2bc840u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 8));
label_2bc844:
    // 0x2bc844: 0x0  nop
    ctx->pc = 0x2bc844u;
    // NOP
    // 0x2bc848: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x2bc848u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x2bc84c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2bc84cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2bc850:
    // 0x2bc850: 0x85a301d8  lh          $v1, 0x1D8($t5)
    ctx->pc = 0x2bc850u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 472)));
    // 0x2bc854: 0x103182a  slt         $v1, $t0, $v1
    ctx->pc = 0x2bc854u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2bc858: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x2BC858u;
    {
        const bool branch_taken_0x2bc858 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bc858) {
            ctx->pc = 0x2BC824u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bc824;
        }
    }
    ctx->pc = 0x2BC860u;
    // 0x2bc860: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2bc860u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2bc864: 0x254a0002  addiu       $t2, $t2, 0x2
    ctx->pc = 0x2bc864u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x2bc868: 0x28e30003  slti        $v1, $a3, 0x3
    ctx->pc = 0x2bc868u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2bc86c: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2BC86Cu;
    {
        const bool branch_taken_0x2bc86c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BC870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC86Cu;
            // 0x2bc870: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc86c) {
            ctx->pc = 0x2BC804u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bc804;
        }
    }
    ctx->pc = 0x2BC874u;
label_2bc874:
    // 0x2bc874: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2bc874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bc878: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2bc878u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bc87c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2bc87cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bc880: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bc880u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bc884: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bc884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc888: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC88Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC888u;
            // 0x2bc88c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BC890u;
}
