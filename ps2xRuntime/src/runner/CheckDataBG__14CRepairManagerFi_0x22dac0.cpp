#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckDataBG__14CRepairManagerFi
// Address: 0x22dac0 - 0x22db54
void CheckDataBG__14CRepairManagerFi_0x22dac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckDataBG__14CRepairManagerFi_0x22dac0");
#endif

    switch (ctx->pc) {
        case 0x22daecu: goto label_22daec;
        case 0x22db04u: goto label_22db04;
        case 0x22db18u: goto label_22db18;
        case 0x22db30u: goto label_22db30;
        default: break;
    }

    ctx->pc = 0x22dac0u;

    // 0x22dac0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22dac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22dac4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22dac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22dac8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22dac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22dacc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22daccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22dad0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22dad0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22dad4: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x22dad4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x22dad8: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x22DAD8u;
    {
        const bool branch_taken_0x22dad8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22DADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DAD8u;
            // 0x22dadc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dad8) {
            ctx->pc = 0x22DB40u;
            goto label_22db40;
        }
    }
    ctx->pc = 0x22DAE0u;
    // 0x22dae0: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x22dae0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x22dae4: 0xc04b950  jal         func_12E540
    ctx->pc = 0x22DAE4u;
    SET_GPR_U32(ctx, 31, 0x22DAECu);
    ctx->pc = 0x22DAE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22DAE4u;
            // 0x22dae8: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DAECu; }
        if (ctx->pc != 0x22DAECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DAECu; }
        if (ctx->pc != 0x22DAECu) { return; }
    }
    ctx->pc = 0x22DAECu;
label_22daec:
    // 0x22daec: 0xa6300002  sh          $s0, 0x2($s1)
    ctx->pc = 0x22daecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 16));
    // 0x22daf0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x22daf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x22daf4: 0x8e2401ac  lw          $a0, 0x1AC($s1)
    ctx->pc = 0x22daf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
    // 0x22daf8: 0x24a5a700  addiu       $a1, $a1, -0x5900
    ctx->pc = 0x22daf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944512));
    // 0x22dafc: 0xc052734  jal         func_149CD0
    ctx->pc = 0x22DAFCu;
    SET_GPR_U32(ctx, 31, 0x22DB04u);
    ctx->pc = 0x22DB00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22DAFCu;
            // 0x22db00: 0x27a6003c  addiu       $a2, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DB04u; }
        if (ctx->pc != 0x22DB04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DB04u; }
        if (ctx->pc != 0x22DB04u) { return; }
    }
    ctx->pc = 0x22DB04u;
label_22db04:
    // 0x22db04: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x22db04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x22db08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22db08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22db0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22db0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22db10: 0xc0944e8  jal         func_2513A0
    ctx->pc = 0x22DB10u;
    SET_GPR_U32(ctx, 31, 0x22DB18u);
    ctx->pc = 0x22DB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22DB10u;
            // 0x22db14: 0x24c6a718  addiu       $a2, $a2, -0x58E8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2513A0u;
    if (runtime->hasFunction(0x2513A0u)) {
        auto targetFn = runtime->lookupFunction(0x2513A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DB18u; }
        if (ctx->pc != 0x22DB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuEnterIMG__FiPUcPc_0x2513a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DB18u; }
        if (ctx->pc != 0x22DB18u) { return; }
    }
    ctx->pc = 0x22DB18u;
label_22db18:
    // 0x22db18: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x22db18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x22db1c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x22db1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x22db20: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x22db20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x22db24: 0x24a5a720  addiu       $a1, $a1, -0x58E0
    ctx->pc = 0x22db24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944544));
    // 0x22db28: 0xc04b414  jal         func_12D050
    ctx->pc = 0x22DB28u;
    SET_GPR_U32(ctx, 31, 0x22DB30u);
    ctx->pc = 0x22DB2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22DB28u;
            // 0x22db2c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DB30u; }
        if (ctx->pc != 0x22DB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DB30u; }
        if (ctx->pc != 0x22DB30u) { return; }
    }
    ctx->pc = 0x22DB30u;
label_22db30:
    // 0x22db30: 0xae2201a8  sw          $v0, 0x1A8($s1)
    ctx->pc = 0x22db30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 424), GPR_U32(ctx, 2));
    // 0x22db34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22db34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22db38: 0xa2230001  sb          $v1, 0x1($s1)
    ctx->pc = 0x22db38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x22db3c: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x22db3cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_22db40:
    // 0x22db40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22db40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22db44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22db44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22db48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22db48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22db4c: 0x3e00008  jr          $ra
    ctx->pc = 0x22DB4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22DB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DB4Cu;
            // 0x22db50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22DB54u;
}
