#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MovieViewLoop__Fv
// Address: 0x2c7290 - 0x2c79e8
void MovieViewLoop__Fv_0x2c7290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MovieViewLoop__Fv_0x2c7290");
#endif

    switch (ctx->pc) {
        case 0x2c72c4u: goto label_2c72c4;
        case 0x2c72dcu: goto label_2c72dc;
        case 0x2c72fcu: goto label_2c72fc;
        case 0x2c731cu: goto label_2c731c;
        case 0x2c733cu: goto label_2c733c;
        case 0x2c735cu: goto label_2c735c;
        case 0x2c73ecu: goto label_2c73ec;
        case 0x2c742cu: goto label_2c742c;
        case 0x2c7448u: goto label_2c7448;
        case 0x2c746cu: goto label_2c746c;
        case 0x2c7484u: goto label_2c7484;
        case 0x2c7498u: goto label_2c7498;
        case 0x2c74d0u: goto label_2c74d0;
        case 0x2c74e0u: goto label_2c74e0;
        case 0x2c74e8u: goto label_2c74e8;
        case 0x2c74f0u: goto label_2c74f0;
        case 0x2c74f8u: goto label_2c74f8;
        case 0x2c7500u: goto label_2c7500;
        case 0x2c7520u: goto label_2c7520;
        case 0x2c755cu: goto label_2c755c;
        case 0x2c756cu: goto label_2c756c;
        case 0x2c7574u: goto label_2c7574;
        case 0x2c757cu: goto label_2c757c;
        case 0x2c7584u: goto label_2c7584;
        case 0x2c7590u: goto label_2c7590;
        case 0x2c75c4u: goto label_2c75c4;
        case 0x2c75d4u: goto label_2c75d4;
        case 0x2c75dcu: goto label_2c75dc;
        case 0x2c75e4u: goto label_2c75e4;
        case 0x2c75ecu: goto label_2c75ec;
        case 0x2c75f8u: goto label_2c75f8;
        case 0x2c7618u: goto label_2c7618;
        case 0x2c7620u: goto label_2c7620;
        case 0x2c7628u: goto label_2c7628;
        case 0x2c7638u: goto label_2c7638;
        case 0x2c7644u: goto label_2c7644;
        case 0x2c7654u: goto label_2c7654;
        case 0x2c7674u: goto label_2c7674;
        case 0x2c768cu: goto label_2c768c;
        case 0x2c76acu: goto label_2c76ac;
        case 0x2c76ccu: goto label_2c76cc;
        case 0x2c76dcu: goto label_2c76dc;
        case 0x2c76f0u: goto label_2c76f0;
        case 0x2c774cu: goto label_2c774c;
        case 0x2c775cu: goto label_2c775c;
        case 0x2c7764u: goto label_2c7764;
        case 0x2c776cu: goto label_2c776c;
        case 0x2c777cu: goto label_2c777c;
        case 0x2c7784u: goto label_2c7784;
        case 0x2c7790u: goto label_2c7790;
        case 0x2c779cu: goto label_2c779c;
        case 0x2c77a8u: goto label_2c77a8;
        case 0x2c77c0u: goto label_2c77c0;
        case 0x2c77e0u: goto label_2c77e0;
        case 0x2c77ecu: goto label_2c77ec;
        case 0x2c7804u: goto label_2c7804;
        case 0x2c7824u: goto label_2c7824;
        case 0x2c782cu: goto label_2c782c;
        case 0x2c783cu: goto label_2c783c;
        case 0x2c7850u: goto label_2c7850;
        case 0x2c7864u: goto label_2c7864;
        case 0x2c7878u: goto label_2c7878;
        case 0x2c7888u: goto label_2c7888;
        case 0x2c7890u: goto label_2c7890;
        case 0x2c7898u: goto label_2c7898;
        case 0x2c78acu: goto label_2c78ac;
        case 0x2c78bcu: goto label_2c78bc;
        case 0x2c78c4u: goto label_2c78c4;
        case 0x2c78d4u: goto label_2c78d4;
        case 0x2c7930u: goto label_2c7930;
        case 0x2c7954u: goto label_2c7954;
        case 0x2c7978u: goto label_2c7978;
        case 0x2c7988u: goto label_2c7988;
        case 0x2c7990u: goto label_2c7990;
        case 0x2c7998u: goto label_2c7998;
        case 0x2c79a0u: goto label_2c79a0;
        case 0x2c79a8u: goto label_2c79a8;
        default: break;
    }

    ctx->pc = 0x2c7290u;

    // 0x2c7290: 0x27bdfcb0  addiu       $sp, $sp, -0x350
    ctx->pc = 0x2c7290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966448));
    // 0x2c7294: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2c7294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c7298: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c7298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c729c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c729cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c72a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c72a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c72a4: 0x8f839d90  lw          $v1, -0x6270($gp)
    ctx->pc = 0x2c72a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942096)));
    // 0x2c72a8: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x2c72a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x2c72ac: 0x14600122  bnez        $v1, . + 4 + (0x122 << 2)
    ctx->pc = 0x2C72ACu;
    {
        const bool branch_taken_0x2c72ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C72B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C72ACu;
            // 0x2c72b0: 0x26101ef0  addiu       $s0, $s0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c72ac) {
            ctx->pc = 0x2C7738u;
            goto label_2c7738;
        }
    }
    ctx->pc = 0x2C72B4u;
    // 0x2c72b4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2c72b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x2c72b8: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x2c72b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2c72bc: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2C72BCu;
    SET_GPR_U32(ctx, 31, 0x2C72C4u);
    ctx->pc = 0x2C72C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C72BCu;
            // 0x2c72c0: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C72C4u; }
        if (ctx->pc != 0x2C72C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C72C4u; }
        if (ctx->pc != 0x2C72C4u) { return; }
    }
    ctx->pc = 0x2C72C4u;
label_2c72c4:
    // 0x2c72c4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C72C4u;
    {
        const bool branch_taken_0x2c72c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C72C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C72C4u;
            // 0x2c72c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c72c4) {
            ctx->pc = 0x2C72E8u;
            goto label_2c72e8;
        }
    }
    ctx->pc = 0x2C72CCu;
    // 0x2c72cc: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2c72ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x2c72d0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2c72d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2c72d4: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2C72D4u;
    SET_GPR_U32(ctx, 31, 0x2C72DCu);
    ctx->pc = 0x2C72D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C72D4u;
            // 0x2c72d8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C72DCu; }
        if (ctx->pc != 0x2C72DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C72DCu; }
        if (ctx->pc != 0x2C72DCu) { return; }
    }
    ctx->pc = 0x2C72DCu;
label_2c72dc:
    // 0x2c72dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C72DCu;
    {
        const bool branch_taken_0x2c72dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C72E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C72DCu;
            // 0x2c72e0: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c72dc) {
            ctx->pc = 0x2C72F0u;
            goto label_2c72f0;
        }
    }
    ctx->pc = 0x2C72E4u;
    // 0x2c72e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c72e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c72e8:
    // 0x2c72e8: 0x100001ba  b           . + 4 + (0x1BA << 2)
    ctx->pc = 0x2C72E8u;
    {
        const bool branch_taken_0x2c72e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C72ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C72E8u;
            // 0x2c72ec: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c72e8) {
            ctx->pc = 0x2C79D4u;
            goto label_2c79d4;
        }
    }
    ctx->pc = 0x2C72F0u;
label_2c72f0:
    // 0x2c72f0: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x2c72f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x2c72f4: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2C72F4u;
    SET_GPR_U32(ctx, 31, 0x2C72FCu);
    ctx->pc = 0x2C72F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C72F4u;
            // 0x2c72f8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C72FCu; }
        if (ctx->pc != 0x2C72FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C72FCu; }
        if (ctx->pc != 0x2C72FCu) { return; }
    }
    ctx->pc = 0x2C72FCu;
label_2c72fc:
    // 0x2c72fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C72FCu;
    {
        const bool branch_taken_0x2c72fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C72FCu;
            // 0x2c7300: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c72fc) {
            ctx->pc = 0x2C7310u;
            goto label_2c7310;
        }
    }
    ctx->pc = 0x2C7304u;
    // 0x2c7304: 0x87829d7c  lh          $v0, -0x6284($gp)
    ctx->pc = 0x2c7304u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294942076)));
    // 0x2c7308: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2c7308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2c730c: 0xa7829d7c  sh          $v0, -0x6284($gp)
    ctx->pc = 0x2c730cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294942076), (uint16_t)GPR_U32(ctx, 2));
label_2c7310:
    // 0x2c7310: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x2c7310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2c7314: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2C7314u;
    SET_GPR_U32(ctx, 31, 0x2C731Cu);
    ctx->pc = 0x2C7318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7314u;
            // 0x2c7318: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C731Cu; }
        if (ctx->pc != 0x2C731Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C731Cu; }
        if (ctx->pc != 0x2C731Cu) { return; }
    }
    ctx->pc = 0x2C731Cu;
label_2c731c:
    // 0x2c731c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C731Cu;
    {
        const bool branch_taken_0x2c731c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C731Cu;
            // 0x2c7320: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c731c) {
            ctx->pc = 0x2C7330u;
            goto label_2c7330;
        }
    }
    ctx->pc = 0x2C7324u;
    // 0x2c7324: 0x87829d7c  lh          $v0, -0x6284($gp)
    ctx->pc = 0x2c7324u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294942076)));
    // 0x2c7328: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c7328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c732c: 0xa7829d7c  sh          $v0, -0x6284($gp)
    ctx->pc = 0x2c732cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294942076), (uint16_t)GPR_U32(ctx, 2));
label_2c7330:
    // 0x2c7330: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2c7330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c7334: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2C7334u;
    SET_GPR_U32(ctx, 31, 0x2C733Cu);
    ctx->pc = 0x2C7338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7334u;
            // 0x2c7338: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C733Cu; }
        if (ctx->pc != 0x2C733Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C733Cu; }
        if (ctx->pc != 0x2C733Cu) { return; }
    }
    ctx->pc = 0x2C733Cu;
label_2c733c:
    // 0x2c733c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C733Cu;
    {
        const bool branch_taken_0x2c733c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C733Cu;
            // 0x2c7340: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c733c) {
            ctx->pc = 0x2C7350u;
            goto label_2c7350;
        }
    }
    ctx->pc = 0x2C7344u;
    // 0x2c7344: 0x87829d7c  lh          $v0, -0x6284($gp)
    ctx->pc = 0x2c7344u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294942076)));
    // 0x2c7348: 0x2442fff9  addiu       $v0, $v0, -0x7
    ctx->pc = 0x2c7348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967289));
    // 0x2c734c: 0xa7829d7c  sh          $v0, -0x6284($gp)
    ctx->pc = 0x2c734cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294942076), (uint16_t)GPR_U32(ctx, 2));
label_2c7350:
    // 0x2c7350: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2c7350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c7354: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2C7354u;
    SET_GPR_U32(ctx, 31, 0x2C735Cu);
    ctx->pc = 0x2C7358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7354u;
            // 0x2c7358: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C735Cu; }
        if (ctx->pc != 0x2C735Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C735Cu; }
        if (ctx->pc != 0x2C735Cu) { return; }
    }
    ctx->pc = 0x2C735Cu;
label_2c735c:
    // 0x2c735c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C735Cu;
    {
        const bool branch_taken_0x2c735c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c735c) {
            ctx->pc = 0x2C7370u;
            goto label_2c7370;
        }
    }
    ctx->pc = 0x2C7364u;
    // 0x2c7364: 0x87829d7c  lh          $v0, -0x6284($gp)
    ctx->pc = 0x2c7364u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294942076)));
    // 0x2c7368: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x2c7368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x2c736c: 0xa7829d7c  sh          $v0, -0x6284($gp)
    ctx->pc = 0x2c736cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294942076), (uint16_t)GPR_U32(ctx, 2));
label_2c7370:
    // 0x2c7370: 0x87829d7c  lh          $v0, -0x6284($gp)
    ctx->pc = 0x2c7370u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294942076)));
    // 0x2c7374: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C7374u;
    {
        const bool branch_taken_0x2c7374 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2c7374) {
            ctx->pc = 0x2C7380u;
            goto label_2c7380;
        }
    }
    ctx->pc = 0x2C737Cu;
    // 0x2c737c: 0xa7809d7c  sh          $zero, -0x6284($gp)
    ctx->pc = 0x2c737cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294942076), (uint16_t)GPR_U32(ctx, 0));
label_2c7380:
    // 0x2c7380: 0x8f839d70  lw          $v1, -0x6290($gp)
    ctx->pc = 0x2c7380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942064)));
    // 0x2c7384: 0x87829d7c  lh          $v0, -0x6284($gp)
    ctx->pc = 0x2c7384u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294942076)));
    // 0x2c7388: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x2c7388u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c738c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C738Cu;
    {
        const bool branch_taken_0x2c738c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C738Cu;
            // 0x2c7390: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c738c) {
            ctx->pc = 0x2C7398u;
            goto label_2c7398;
        }
    }
    ctx->pc = 0x2C7394u;
    // 0x2c7394: 0xa7829d7c  sh          $v0, -0x6284($gp)
    ctx->pc = 0x2c7394u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294942076), (uint16_t)GPR_U32(ctx, 2));
label_2c7398:
    // 0x2c7398: 0x87849d7c  lh          $a0, -0x6284($gp)
    ctx->pc = 0x2c7398u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294942076)));
    // 0x2c739c: 0x87829d78  lh          $v0, -0x6288($gp)
    ctx->pc = 0x2c739cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294942072)));
    // 0x2c73a0: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x2c73a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c73a4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C73A4u;
    {
        const bool branch_taken_0x2c73a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c73a4) {
            ctx->pc = 0x2C73B4u;
            goto label_2c73b4;
        }
    }
    ctx->pc = 0x2C73ACu;
    // 0x2c73ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2c73acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2c73b0: 0xa7829d78  sh          $v0, -0x6288($gp)
    ctx->pc = 0x2c73b0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294942072), (uint16_t)GPR_U32(ctx, 2));
label_2c73b4:
    // 0x2c73b4: 0x87829d78  lh          $v0, -0x6288($gp)
    ctx->pc = 0x2c73b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294942072)));
    // 0x2c73b8: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C73B8u;
    {
        const bool branch_taken_0x2c73b8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2c73b8) {
            ctx->pc = 0x2C73C4u;
            goto label_2c73c4;
        }
    }
    ctx->pc = 0x2C73C0u;
    // 0x2c73c0: 0xa7809d78  sh          $zero, -0x6288($gp)
    ctx->pc = 0x2c73c0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294942072), (uint16_t)GPR_U32(ctx, 0));
label_2c73c4:
    // 0x2c73c4: 0x87839d78  lh          $v1, -0x6288($gp)
    ctx->pc = 0x2c73c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294942072)));
    // 0x2c73c8: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x2c73c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x2c73cc: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x2c73ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2c73d0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C73D0u;
    {
        const bool branch_taken_0x2c73d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C73D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C73D0u;
            // 0x2c73d4: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c73d0) {
            ctx->pc = 0x2C73E0u;
            goto label_2c73e0;
        }
    }
    ctx->pc = 0x2C73D8u;
    // 0x2c73d8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2c73d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2c73dc: 0xa7829d78  sh          $v0, -0x6288($gp)
    ctx->pc = 0x2c73dcu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294942072), (uint16_t)GPR_U32(ctx, 2));
label_2c73e0:
    // 0x2c73e0: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2c73e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2c73e4: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2C73E4u;
    SET_GPR_U32(ctx, 31, 0x2C73ECu);
    ctx->pc = 0x2C73E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C73E4u;
            // 0x2c73e8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C73ECu; }
        if (ctx->pc != 0x2C73ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C73ECu; }
        if (ctx->pc != 0x2C73ECu) { return; }
    }
    ctx->pc = 0x2C73ECu;
label_2c73ec:
    // 0x2c73ec: 0x10400087  beqz        $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x2C73ECu;
    {
        const bool branch_taken_0x2c73ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C73F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C73ECu;
            // 0x2c73f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c73ec) {
            ctx->pc = 0x2C760Cu;
            goto label_2c760c;
        }
    }
    ctx->pc = 0x2C73F4u;
    // 0x2c73f4: 0x87879d7c  lh          $a3, -0x6284($gp)
    ctx->pc = 0x2c73f4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294942076)));
    // 0x2c73f8: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2c73f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2c73fc: 0xac20d354  sw          $zero, -0x2CAC($at)
    ctx->pc = 0x2c73fcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294955860), GPR_U32(ctx, 0));
    // 0x2c7400: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c7400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7404: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2c7404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2c7408: 0x8f829d74  lw          $v0, -0x628C($gp)
    ctx->pc = 0x2c7408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942068)));
    // 0x2c740c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2c740cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2c7410: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c7410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7414: 0xac20d34c  sw          $zero, -0x2CB4($at)
    ctx->pc = 0x2c7414u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294955852), GPR_U32(ctx, 0));
    // 0x2c7418: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2c7418u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2c741c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2c741cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2c7420: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c7420u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c7424: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x2C7424u;
    SET_GPR_U32(ctx, 31, 0x2C742Cu);
    ctx->pc = 0x2C7428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7424u;
            // 0x2c7428: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C742Cu; }
        if (ctx->pc != 0x2C742Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C742Cu; }
        if (ctx->pc != 0x2C742Cu) { return; }
    }
    ctx->pc = 0x2C742Cu;
label_2c742c:
    // 0x2c742c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2c742cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2c7430: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2c7430u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c7434: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x2C7434u;
    {
        const bool branch_taken_0x2c7434 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7434) {
            ctx->pc = 0x2C7484u;
            goto label_2c7484;
        }
    }
    ctx->pc = 0x2C743Cu;
    // 0x2c743c: 0x8f849d60  lw          $a0, -0x62A0($gp)
    ctx->pc = 0x2c743cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942048)));
    // 0x2c7440: 0xc0a98a0  jal         func_2A6280
    ctx->pc = 0x2C7440u;
    SET_GPR_U32(ctx, 31, 0x2C7448u);
    ctx->pc = 0x2C7444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7440u;
            // 0x2c7444: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6280u;
    if (runtime->hasFunction(0x2A6280u)) {
        auto targetFn = runtime->lookupFunction(0x2A6280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7448u; }
        if (ctx->pc != 0x2C7448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopBGM__6CSceneFi_0x2a6280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7448u; }
        if (ctx->pc != 0x2C7448u) { return; }
    }
    ctx->pc = 0x2C7448u;
label_2c7448:
    // 0x2c7448: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2c7448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2c744c: 0x8f849d60  lw          $a0, -0x62A0($gp)
    ctx->pc = 0x2c744cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942048)));
    // 0x2c7450: 0x8c23d354  lw          $v1, -0x2CAC($at)
    ctx->pc = 0x2c7450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294955860)));
    // 0x2c7454: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x2c7454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2c7458: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2c7458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2c745c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2c745cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2c7460: 0x8c22d350  lw          $v0, -0x2CB0($at)
    ctx->pc = 0x2c7460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294955856)));
    // 0x2c7464: 0xc0a9be4  jal         func_2A6F90
    ctx->pc = 0x2C7464u;
    SET_GPR_U32(ctx, 31, 0x2C746Cu);
    ctx->pc = 0x2C7468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7464u;
            // 0x2c7468: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6F90u;
    if (runtime->hasFunction(0x2A6F90u)) {
        auto targetFn = runtime->lookupFunction(0x2A6F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C746Cu; }
        if (ctx->pc != 0x2C746Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadBGM__6CSceneFiP1_0x2a6f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C746Cu; }
        if (ctx->pc != 0x2C746Cu) { return; }
    }
    ctx->pc = 0x2C746Cu;
label_2c746c:
    // 0x2c746c: 0x8f849d60  lw          $a0, -0x62A0($gp)
    ctx->pc = 0x2c746cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942048)));
    // 0x2c7470: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2c7470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2c7474: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2c7474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c7478: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c7478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c747c: 0xc0a9844  jal         func_2A6110
    ctx->pc = 0x2C747Cu;
    SET_GPR_U32(ctx, 31, 0x2C7484u);
    ctx->pc = 0x2C7480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C747Cu;
            // 0x2c7480: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6110u;
    if (runtime->hasFunction(0x2A6110u)) {
        auto targetFn = runtime->lookupFunction(0x2A6110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7484u; }
        if (ctx->pc != 0x2C7484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayBGM__6CSceneFiif_0x2a6110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7484u; }
        if (ctx->pc != 0x2C7484u) { return; }
    }
    ctx->pc = 0x2C7484u;
label_2c7484:
    // 0x2c7484: 0xa7809d84  sh          $zero, -0x627C($gp)
    ctx->pc = 0x2c7484u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294942084), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c7488: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c7488u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c748c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c748cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c7490: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x2C7490u;
    SET_GPR_U32(ctx, 31, 0x2C7498u);
    ctx->pc = 0x2C7494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7490u;
            // 0x2c7494: 0x24a5ff30  addiu       $a1, $a1, -0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7498u; }
        if (ctx->pc != 0x2C7498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7498u; }
        if (ctx->pc != 0x2C7498u) { return; }
    }
    ctx->pc = 0x2C7498u;
label_2c7498:
    // 0x2c7498: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2C7498u;
    {
        const bool branch_taken_0x2c7498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7498) {
            ctx->pc = 0x2C7510u;
            goto label_2c7510;
        }
    }
    ctx->pc = 0x2C74A0u;
    // 0x2c74a0: 0x8f849d64  lw          $a0, -0x629C($gp)
    ctx->pc = 0x2c74a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942052)));
    // 0x2c74a4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2c74a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c74a8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c74a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c74ac: 0x3c0601f1  lui         $a2, 0x1F1
    ctx->pc = 0x2c74acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)497 << 16));
    // 0x2c74b0: 0xa7899d84  sh          $t1, -0x627C($gp)
    ctx->pc = 0x2c74b0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294942084), (uint16_t)GPR_U32(ctx, 9));
    // 0x2c74b4: 0x24a5ff38  addiu       $a1, $a1, -0xC8
    ctx->pc = 0x2c74b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967096));
    // 0x2c74b8: 0xa7899d88  sh          $t1, -0x6278($gp)
    ctx->pc = 0x2c74b8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294942088), (uint16_t)GPR_U32(ctx, 9));
    // 0x2c74bc: 0x24c6d330  addiu       $a2, $a2, -0x2CD0
    ctx->pc = 0x2c74bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955824));
    // 0x2c74c0: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x2c74c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2c74c4: 0x240801a0  addiu       $t0, $zero, 0x1A0
    ctx->pc = 0x2c74c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
    // 0x2c74c8: 0xc0a62b4  jal         func_298AD0
    ctx->pc = 0x2C74C8u;
    SET_GPR_U32(ctx, 31, 0x2C74D0u);
    ctx->pc = 0x2C74CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C74C8u;
            // 0x2c74cc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298AD0u;
    if (runtime->hasFunction(0x298AD0u)) {
        auto targetFn = runtime->lookupFunction(0x298AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C74D0u; }
        if (ctx->pc != 0x2C74D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Load__6CMovieFPcP9mgCMemoryiibb_0x298ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C74D0u; }
        if (ctx->pc != 0x2C74D0u) { return; }
    }
    ctx->pc = 0x2C74D0u;
label_2c74d0:
    // 0x2c74d0: 0x8f849d64  lw          $a0, -0x629C($gp)
    ctx->pc = 0x2c74d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942052)));
    // 0x2c74d4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c74d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c74d8: 0xc0a62e0  jal         func_298B80
    ctx->pc = 0x2C74D8u;
    SET_GPR_U32(ctx, 31, 0x2C74E0u);
    ctx->pc = 0x2C74DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C74D8u;
            // 0x2c74dc: 0x24a5ff20  addiu       $a1, $a1, -0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298B80u;
    if (runtime->hasFunction(0x298B80u)) {
        auto targetFn = runtime->lookupFunction(0x298B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C74E0u; }
        if (ctx->pc != 0x2C74E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Play__6CMovieFPc_0x298b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C74E0u; }
        if (ctx->pc != 0x2C74E0u) { return; }
    }
    ctx->pc = 0x2C74E0u;
label_2c74e0:
    // 0x2c74e0: 0xc0a6360  jal         func_298D80
    ctx->pc = 0x2C74E0u;
    SET_GPR_U32(ctx, 31, 0x2C74E8u);
    ctx->pc = 0x2C74E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C74E0u;
            // 0x2c74e4: 0x8f849d64  lw          $a0, -0x629C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942052)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298D80u;
    if (runtime->hasFunction(0x298D80u)) {
        auto targetFn = runtime->lookupFunction(0x298D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C74E8u; }
        if (ctx->pc != 0x2C74E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SwitchThread__6CMovieFv_0x298d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C74E8u; }
        if (ctx->pc != 0x2C74E8u) { return; }
    }
    ctx->pc = 0x2C74E8u;
label_2c74e8:
    // 0x2c74e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C74E8u;
    {
        const bool branch_taken_0x2c74e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c74e8) {
            ctx->pc = 0x2C74F8u;
            goto label_2c74f8;
        }
    }
    ctx->pc = 0x2C74F0u;
label_2c74f0:
    // 0x2c74f0: 0xc0a6360  jal         func_298D80
    ctx->pc = 0x2C74F0u;
    SET_GPR_U32(ctx, 31, 0x2C74F8u);
    ctx->pc = 0x2C74F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C74F0u;
            // 0x2c74f4: 0x8f849d64  lw          $a0, -0x629C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942052)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298D80u;
    if (runtime->hasFunction(0x298D80u)) {
        auto targetFn = runtime->lookupFunction(0x298D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C74F8u; }
        if (ctx->pc != 0x2C74F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SwitchThread__6CMovieFv_0x298d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C74F8u; }
        if (ctx->pc != 0x2C74F8u) { return; }
    }
    ctx->pc = 0x2C74F8u;
label_2c74f8:
    // 0x2c74f8: 0xc0a63dc  jal         func_298F70
    ctx->pc = 0x2C74F8u;
    SET_GPR_U32(ctx, 31, 0x2C7500u);
    ctx->pc = 0x2C74FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C74F8u;
            // 0x2c74fc: 0x8f849d64  lw          $a0, -0x629C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942052)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298F70u;
    if (runtime->hasFunction(0x298F70u)) {
        auto targetFn = runtime->lookupFunction(0x298F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7500u; }
        if (ctx->pc != 0x2C7500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsStarted__6CMovieFv_0x298f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7500u; }
        if (ctx->pc != 0x2C7500u) { return; }
    }
    ctx->pc = 0x2C7500u;
label_2c7500:
    // 0x2c7500: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2C7500u;
    {
        const bool branch_taken_0x2c7500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7500) {
            ctx->pc = 0x2C74F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c74f0;
        }
    }
    ctx->pc = 0x2C7508u;
    // 0x2c7508: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x2C7508u;
    {
        const bool branch_taken_0x2c7508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7508) {
            ctx->pc = 0x2C7600u;
            goto label_2c7600;
        }
    }
    ctx->pc = 0x2C7510u;
label_2c7510:
    // 0x2c7510: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c7510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c7514: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c7514u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c7518: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x2C7518u;
    SET_GPR_U32(ctx, 31, 0x2C7520u);
    ctx->pc = 0x2C751Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7518u;
            // 0x2c751c: 0x24a5ff48  addiu       $a1, $a1, -0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7520u; }
        if (ctx->pc != 0x2C7520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7520u; }
        if (ctx->pc != 0x2C7520u) { return; }
    }
    ctx->pc = 0x2C7520u;
label_2c7520:
    // 0x2c7520: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2C7520u;
    {
        const bool branch_taken_0x2c7520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7520) {
            ctx->pc = 0x2C75A0u;
            goto label_2c75a0;
        }
    }
    ctx->pc = 0x2C7528u;
    // 0x2c7528: 0x8f849d64  lw          $a0, -0x629C($gp)
    ctx->pc = 0x2c7528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942052)));
    // 0x2c752c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c752cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c7530: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2c7530u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7534: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c7534u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c7538: 0x3c0601f1  lui         $a2, 0x1F1
    ctx->pc = 0x2c7538u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)497 << 16));
    // 0x2c753c: 0xa7829d84  sh          $v0, -0x627C($gp)
    ctx->pc = 0x2c753cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294942084), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c7540: 0x24a5ff58  addiu       $a1, $a1, -0xA8
    ctx->pc = 0x2c7540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967128));
    // 0x2c7544: 0xa7899d88  sh          $t1, -0x6278($gp)
    ctx->pc = 0x2c7544u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294942088), (uint16_t)GPR_U32(ctx, 9));
    // 0x2c7548: 0x24c6d330  addiu       $a2, $a2, -0x2CD0
    ctx->pc = 0x2c7548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955824));
    // 0x2c754c: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x2c754cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2c7550: 0x240801a0  addiu       $t0, $zero, 0x1A0
    ctx->pc = 0x2c7550u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
    // 0x2c7554: 0xc0a62b4  jal         func_298AD0
    ctx->pc = 0x2C7554u;
    SET_GPR_U32(ctx, 31, 0x2C755Cu);
    ctx->pc = 0x2C7558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7554u;
            // 0x2c7558: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298AD0u;
    if (runtime->hasFunction(0x298AD0u)) {
        auto targetFn = runtime->lookupFunction(0x298AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C755Cu; }
        if (ctx->pc != 0x2C755Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Load__6CMovieFPcP9mgCMemoryiibb_0x298ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C755Cu; }
        if (ctx->pc != 0x2C755Cu) { return; }
    }
    ctx->pc = 0x2C755Cu;
label_2c755c:
    // 0x2c755c: 0x8f849d64  lw          $a0, -0x629C($gp)
    ctx->pc = 0x2c755cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942052)));
    // 0x2c7560: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c7560u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c7564: 0xc0a62e0  jal         func_298B80
    ctx->pc = 0x2C7564u;
    SET_GPR_U32(ctx, 31, 0x2C756Cu);
    ctx->pc = 0x2C7568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7564u;
            // 0x2c7568: 0x24a5ff20  addiu       $a1, $a1, -0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298B80u;
    if (runtime->hasFunction(0x298B80u)) {
        auto targetFn = runtime->lookupFunction(0x298B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C756Cu; }
        if (ctx->pc != 0x2C756Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Play__6CMovieFPc_0x298b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C756Cu; }
        if (ctx->pc != 0x2C756Cu) { return; }
    }
    ctx->pc = 0x2C756Cu;
label_2c756c:
    // 0x2c756c: 0xc0a6360  jal         func_298D80
    ctx->pc = 0x2C756Cu;
    SET_GPR_U32(ctx, 31, 0x2C7574u);
    ctx->pc = 0x2C7570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C756Cu;
            // 0x2c7570: 0x8f849d64  lw          $a0, -0x629C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942052)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298D80u;
    if (runtime->hasFunction(0x298D80u)) {
        auto targetFn = runtime->lookupFunction(0x298D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7574u; }
        if (ctx->pc != 0x2C7574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SwitchThread__6CMovieFv_0x298d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7574u; }
        if (ctx->pc != 0x2C7574u) { return; }
    }
    ctx->pc = 0x2C7574u;
label_2c7574:
    // 0x2c7574: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C7574u;
    {
        const bool branch_taken_0x2c7574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7574) {
            ctx->pc = 0x2C7584u;
            goto label_2c7584;
        }
    }
    ctx->pc = 0x2C757Cu;
label_2c757c:
    // 0x2c757c: 0xc0a6360  jal         func_298D80
    ctx->pc = 0x2C757Cu;
    SET_GPR_U32(ctx, 31, 0x2C7584u);
    ctx->pc = 0x2C7580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C757Cu;
            // 0x2c7580: 0x8f849d64  lw          $a0, -0x629C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942052)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298D80u;
    if (runtime->hasFunction(0x298D80u)) {
        auto targetFn = runtime->lookupFunction(0x298D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7584u; }
        if (ctx->pc != 0x2C7584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SwitchThread__6CMovieFv_0x298d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7584u; }
        if (ctx->pc != 0x2C7584u) { return; }
    }
    ctx->pc = 0x2C7584u;
label_2c7584:
    // 0x2c7584: 0x0  nop
    ctx->pc = 0x2c7584u;
    // NOP
    // 0x2c7588: 0xc0a63dc  jal         func_298F70
    ctx->pc = 0x2C7588u;
    SET_GPR_U32(ctx, 31, 0x2C7590u);
    ctx->pc = 0x2C758Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7588u;
            // 0x2c758c: 0x8f849d64  lw          $a0, -0x629C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942052)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298F70u;
    if (runtime->hasFunction(0x298F70u)) {
        auto targetFn = runtime->lookupFunction(0x298F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7590u; }
        if (ctx->pc != 0x2C7590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsStarted__6CMovieFv_0x298f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7590u; }
        if (ctx->pc != 0x2C7590u) { return; }
    }
    ctx->pc = 0x2C7590u;
label_2c7590:
    // 0x2c7590: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C7590u;
    {
        const bool branch_taken_0x2c7590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7590) {
            ctx->pc = 0x2C757Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c757c;
        }
    }
    ctx->pc = 0x2C7598u;
    // 0x2c7598: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2C7598u;
    {
        const bool branch_taken_0x2c7598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7598) {
            ctx->pc = 0x2C7600u;
            goto label_2c7600;
        }
    }
    ctx->pc = 0x2C75A0u;
label_2c75a0:
    // 0x2c75a0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x2c75a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2c75a4: 0x3c0601f1  lui         $a2, 0x1F1
    ctx->pc = 0x2c75a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)497 << 16));
    // 0x2c75a8: 0x8f849d64  lw          $a0, -0x629C($gp)
    ctx->pc = 0x2c75a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942052)));
    // 0x2c75ac: 0x24c6d330  addiu       $a2, $a2, -0x2CD0
    ctx->pc = 0x2c75acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955824));
    // 0x2c75b0: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x2c75b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2c75b4: 0x240801a0  addiu       $t0, $zero, 0x1A0
    ctx->pc = 0x2c75b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
    // 0x2c75b8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2c75b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c75bc: 0xc0a62b4  jal         func_298AD0
    ctx->pc = 0x2C75BCu;
    SET_GPR_U32(ctx, 31, 0x2C75C4u);
    ctx->pc = 0x2C75C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C75BCu;
            // 0x2c75c0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298AD0u;
    if (runtime->hasFunction(0x298AD0u)) {
        auto targetFn = runtime->lookupFunction(0x298AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C75C4u; }
        if (ctx->pc != 0x2C75C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Load__6CMovieFPcP9mgCMemoryiibb_0x298ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C75C4u; }
        if (ctx->pc != 0x2C75C4u) { return; }
    }
    ctx->pc = 0x2C75C4u;
label_2c75c4:
    // 0x2c75c4: 0x8f849d64  lw          $a0, -0x629C($gp)
    ctx->pc = 0x2c75c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942052)));
    // 0x2c75c8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c75c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c75cc: 0xc0a62e0  jal         func_298B80
    ctx->pc = 0x2C75CCu;
    SET_GPR_U32(ctx, 31, 0x2C75D4u);
    ctx->pc = 0x2C75D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C75CCu;
            // 0x2c75d0: 0x24a5ff20  addiu       $a1, $a1, -0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298B80u;
    if (runtime->hasFunction(0x298B80u)) {
        auto targetFn = runtime->lookupFunction(0x298B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C75D4u; }
        if (ctx->pc != 0x2C75D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Play__6CMovieFPc_0x298b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C75D4u; }
        if (ctx->pc != 0x2C75D4u) { return; }
    }
    ctx->pc = 0x2C75D4u;
label_2c75d4:
    // 0x2c75d4: 0xc0a6360  jal         func_298D80
    ctx->pc = 0x2C75D4u;
    SET_GPR_U32(ctx, 31, 0x2C75DCu);
    ctx->pc = 0x2C75D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C75D4u;
            // 0x2c75d8: 0x8f849d64  lw          $a0, -0x629C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942052)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298D80u;
    if (runtime->hasFunction(0x298D80u)) {
        auto targetFn = runtime->lookupFunction(0x298D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C75DCu; }
        if (ctx->pc != 0x2C75DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SwitchThread__6CMovieFv_0x298d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C75DCu; }
        if (ctx->pc != 0x2C75DCu) { return; }
    }
    ctx->pc = 0x2C75DCu;
label_2c75dc:
    // 0x2c75dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C75DCu;
    {
        const bool branch_taken_0x2c75dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c75dc) {
            ctx->pc = 0x2C75ECu;
            goto label_2c75ec;
        }
    }
    ctx->pc = 0x2C75E4u;
label_2c75e4:
    // 0x2c75e4: 0xc0a6360  jal         func_298D80
    ctx->pc = 0x2C75E4u;
    SET_GPR_U32(ctx, 31, 0x2C75ECu);
    ctx->pc = 0x2C75E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C75E4u;
            // 0x2c75e8: 0x8f849d64  lw          $a0, -0x629C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942052)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298D80u;
    if (runtime->hasFunction(0x298D80u)) {
        auto targetFn = runtime->lookupFunction(0x298D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C75ECu; }
        if (ctx->pc != 0x2C75ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SwitchThread__6CMovieFv_0x298d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C75ECu; }
        if (ctx->pc != 0x2C75ECu) { return; }
    }
    ctx->pc = 0x2C75ECu;
label_2c75ec:
    // 0x2c75ec: 0x0  nop
    ctx->pc = 0x2c75ecu;
    // NOP
    // 0x2c75f0: 0xc0a63dc  jal         func_298F70
    ctx->pc = 0x2C75F0u;
    SET_GPR_U32(ctx, 31, 0x2C75F8u);
    ctx->pc = 0x2C75F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C75F0u;
            // 0x2c75f4: 0x8f849d64  lw          $a0, -0x629C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942052)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298F70u;
    if (runtime->hasFunction(0x298F70u)) {
        auto targetFn = runtime->lookupFunction(0x298F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C75F8u; }
        if (ctx->pc != 0x2C75F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsStarted__6CMovieFv_0x298f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C75F8u; }
        if (ctx->pc != 0x2C75F8u) { return; }
    }
    ctx->pc = 0x2C75F8u;
label_2c75f8:
    // 0x2c75f8: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C75F8u;
    {
        const bool branch_taken_0x2c75f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c75f8) {
            ctx->pc = 0x2C75E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c75e4;
        }
    }
    ctx->pc = 0x2C7600u;
label_2c7600:
    // 0x2c7600: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c7600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7604: 0xaf829d90  sw          $v0, -0x6270($gp)
    ctx->pc = 0x2c7604u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942096), GPR_U32(ctx, 2));
    // 0x2c7608: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c7608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c760c:
    // 0x2c760c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c760cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7610: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x2C7610u;
    SET_GPR_U32(ctx, 31, 0x2C7618u);
    ctx->pc = 0x2C7614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7610u;
            // 0x2c7614: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7618u; }
        if (ctx->pc != 0x2C7618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7618u; }
        if (ctx->pc != 0x2C7618u) { return; }
    }
    ctx->pc = 0x2C7618u;
label_2c7618:
    // 0x2c7618: 0xc0b5750  jal         func_2D5D40
    ctx->pc = 0x2C7618u;
    SET_GPR_U32(ctx, 31, 0x2C7620u);
    ctx->pc = 0x2C761Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7618u;
            // 0x2c761c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5D40u;
    if (runtime->hasFunction(0x2D5D40u)) {
        auto targetFn = runtime->lookupFunction(0x2D5D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7620u; }
        if (ctx->pc != 0x2C7620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__5CFontFv_0x2d5d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7620u; }
        if (ctx->pc != 0x2C7620u) { return; }
    }
    ctx->pc = 0x2C7620u;
label_2c7620:
    // 0x2c7620: 0xc0b5750  jal         func_2D5D40
    ctx->pc = 0x2C7620u;
    SET_GPR_U32(ctx, 31, 0x2C7628u);
    ctx->pc = 0x2C7624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7620u;
            // 0x2c7624: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5D40u;
    if (runtime->hasFunction(0x2D5D40u)) {
        auto targetFn = runtime->lookupFunction(0x2D5D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7628u; }
        if (ctx->pc != 0x2C7628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__5CFontFv_0x2d5d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7628u; }
        if (ctx->pc != 0x2C7628u) { return; }
    }
    ctx->pc = 0x2C7628u;
label_2c7628:
    // 0x2c7628: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2c7628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c762c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2c762cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2c7630: 0xc0b512c  jal         func_2D44B0
    ctx->pc = 0x2C7630u;
    SET_GPR_U32(ctx, 31, 0x2C7638u);
    ctx->pc = 0x2C7634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7630u;
            // 0x2c7634: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44B0u;
    if (runtime->hasFunction(0x2D44B0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7638u; }
        if (ctx->pc != 0x2C7638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetClearance__5CFontFii_0x2d44b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7638u; }
        if (ctx->pc != 0x2C7638u) { return; }
    }
    ctx->pc = 0x2C7638u;
label_2c7638:
    // 0x2c7638: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2c7638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c763c: 0xc0b515c  jal         func_2D4570
    ctx->pc = 0x2C763Cu;
    SET_GPR_U32(ctx, 31, 0x2C7644u);
    ctx->pc = 0x2C7640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C763Cu;
            // 0x2c7640: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4570u;
    if (runtime->hasFunction(0x2D4570u)) {
        auto targetFn = runtime->lookupFunction(0x2D4570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7644u; }
        if (ctx->pc != 0x2C7644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuchi__5CFontFi_0x2d4570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7644u; }
        if (ctx->pc != 0x2C7644u) { return; }
    }
    ctx->pc = 0x2C7644u;
label_2c7644:
    // 0x2c7644: 0x3c028068  lui         $v0, 0x8068
    ctx->pc = 0x2c7644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32872 << 16));
    // 0x2c7648: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2c7648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c764c: 0xc0b5148  jal         func_2D4520
    ctx->pc = 0x2C764Cu;
    SET_GPR_U32(ctx, 31, 0x2C7654u);
    ctx->pc = 0x2C7650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C764Cu;
            // 0x2c7650: 0x34456a6b  ori         $a1, $v0, 0x6A6B (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27243);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4520u;
    if (runtime->hasFunction(0x2D4520u)) {
        auto targetFn = runtime->lookupFunction(0x2D4520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7654u; }
        if (ctx->pc != 0x2C7654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetColor__5CFontFUi_0x2d4520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7654u; }
        if (ctx->pc != 0x2C7654u) { return; }
    }
    ctx->pc = 0x2C7654u;
label_2c7654:
    // 0x2c7654: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c7654u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c7658: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x2c7658u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x2c765c: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x2c765cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
    // 0x2c7660: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2c7660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2c7664: 0x24a5ff68  addiu       $a1, $a1, -0x98
    ctx->pc = 0x2c7664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967144));
    // 0x2c7668: 0x24c6ff78  addiu       $a2, $a2, -0x88
    ctx->pc = 0x2c7668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967160));
    // 0x2c766c: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2C766Cu;
    SET_GPR_U32(ctx, 31, 0x2C7674u);
    ctx->pc = 0x2C7670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C766Cu;
            // 0x2c7670: 0x24e7ff80  addiu       $a3, $a3, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7674u; }
        if (ctx->pc != 0x2C7674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7674u; }
        if (ctx->pc != 0x2C7674u) { return; }
    }
    ctx->pc = 0x2C7674u;
label_2c7674:
    // 0x2c7674: 0x87919d78  lh          $s1, -0x6288($gp)
    ctx->pc = 0x2c7674u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294942072)));
    // 0x2c7678: 0x24100028  addiu       $s0, $zero, 0x28
    ctx->pc = 0x2c7678u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2c767c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x2c767cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2c7680: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2c7680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2c7684: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2C7684u;
    {
        const bool branch_taken_0x2c7684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7684u;
            // 0x2c7688: 0x29080  sll         $s2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7684) {
            ctx->pc = 0x2C7708u;
            goto label_2c7708;
        }
    }
    ctx->pc = 0x2C768Cu;
label_2c768c:
    // 0x2c768c: 0x8f829d74  lw          $v0, -0x628C($gp)
    ctx->pc = 0x2c768cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942068)));
    // 0x2c7690: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c7690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c7694: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2c7694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2c7698: 0x24a5ff88  addiu       $a1, $a1, -0x78
    ctx->pc = 0x2c7698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967176));
    // 0x2c769c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2c769cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2c76a0: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x2c76a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c76a4: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2C76A4u;
    SET_GPR_U32(ctx, 31, 0x2C76ACu);
    ctx->pc = 0x2C76A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C76A4u;
            // 0x2c76a8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C76ACu; }
        if (ctx->pc != 0x2C76ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C76ACu; }
        if (ctx->pc != 0x2C76ACu) { return; }
    }
    ctx->pc = 0x2C76ACu;
label_2c76ac:
    // 0x2c76ac: 0x87829d7c  lh          $v0, -0x6284($gp)
    ctx->pc = 0x2c76acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294942076)));
    // 0x2c76b0: 0x16220002  bne         $s1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C76B0u;
    {
        const bool branch_taken_0x2c76b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C76B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C76B0u;
            // 0x2c76b4: 0x2402003e  addiu       $v0, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c76b0) {
            ctx->pc = 0x2C76BCu;
            goto label_2c76bc;
        }
    }
    ctx->pc = 0x2C76B8u;
    // 0x2c76b8: 0xa3a200f1  sb          $v0, 0xF1($sp)
    ctx->pc = 0x2c76b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 241), (uint8_t)GPR_U32(ctx, 2));
label_2c76bc:
    // 0x2c76bc: 0x0  nop
    ctx->pc = 0x2c76bcu;
    // NOP
    // 0x2c76c0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2c76c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c76c4: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x2C76C4u;
    SET_GPR_U32(ctx, 31, 0x2C76CCu);
    ctx->pc = 0x2C76C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C76C4u;
            // 0x2c76c8: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C76CCu; }
        if (ctx->pc != 0x2C76CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C76CCu; }
        if (ctx->pc != 0x2C76CCu) { return; }
    }
    ctx->pc = 0x2C76CCu;
label_2c76cc:
    // 0x2c76cc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2c76ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c76d0: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x2c76d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2c76d4: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x2C76D4u;
    SET_GPR_U32(ctx, 31, 0x2C76DCu);
    ctx->pc = 0x2C76D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C76D4u;
            // 0x2c76d8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C76DCu; }
        if (ctx->pc != 0x2C76DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C76DCu; }
        if (ctx->pc != 0x2C76DCu) { return; }
    }
    ctx->pc = 0x2C76DCu;
label_2c76dc:
    // 0x2c76dc: 0x8fa600d4  lw          $a2, 0xD4($sp)
    ctx->pc = 0x2c76dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x2c76e0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2c76e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c76e4: 0x8fa700d8  lw          $a3, 0xD8($sp)
    ctx->pc = 0x2c76e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2c76e8: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x2C76E8u;
    SET_GPR_U32(ctx, 31, 0x2C76F0u);
    ctx->pc = 0x2C76ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C76E8u;
            // 0x2c76ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C76F0u; }
        if (ctx->pc != 0x2C76F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C76F0u; }
        if (ctx->pc != 0x2C76F0u) { return; }
    }
    ctx->pc = 0x2C76F0u;
label_2c76f0:
    // 0x2c76f0: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x2c76f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x2c76f4: 0x2a0100c9  slti        $at, $s0, 0xC9
    ctx->pc = 0x2c76f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)201) ? 1 : 0);
    // 0x2c76f8: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x2C76F8u;
    {
        const bool branch_taken_0x2c76f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c76f8) {
            ctx->pc = 0x2C772Cu;
            goto label_2c772c;
        }
    }
    ctx->pc = 0x2C7700u;
    // 0x2c7700: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x2c7700u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x2c7704: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2c7704u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2c7708:
    // 0x2c7708: 0x87829d78  lh          $v0, -0x6288($gp)
    ctx->pc = 0x2c7708u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294942072)));
    // 0x2c770c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2c770cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2c7710: 0x222082a  slt         $at, $s1, $v0
    ctx->pc = 0x2c7710u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c7714: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C7714u;
    {
        const bool branch_taken_0x2c7714 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7714) {
            ctx->pc = 0x2C772Cu;
            goto label_2c772c;
        }
    }
    ctx->pc = 0x2C771Cu;
    // 0x2c771c: 0x8f829d70  lw          $v0, -0x6290($gp)
    ctx->pc = 0x2c771cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942064)));
    // 0x2c7720: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2c7720u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c7724: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x2C7724u;
    {
        const bool branch_taken_0x2c7724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7724) {
            ctx->pc = 0x2C768Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c768c;
        }
    }
    ctx->pc = 0x2C772Cu;
label_2c772c:
    // 0x2c772c: 0x0  nop
    ctx->pc = 0x2c772cu;
    // NOP
    // 0x2c7730: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x2C7730u;
    {
        const bool branch_taken_0x2c7730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7730u;
            // 0x2c7734: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7730) {
            ctx->pc = 0x2C79D0u;
            goto label_2c79d0;
        }
    }
    ctx->pc = 0x2C7738u;
label_2c7738:
    // 0x2c7738: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c7738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c773c: 0x146200a4  bne         $v1, $v0, . + 4 + (0xA4 << 2)
    ctx->pc = 0x2C773Cu;
    {
        const bool branch_taken_0x2c773c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C7740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C773Cu;
            // 0x2c7740: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c773c) {
            ctx->pc = 0x2C79D0u;
            goto label_2c79d0;
        }
    }
    ctx->pc = 0x2C7744u;
    // 0x2c7744: 0xc050478  jal         func_1411E0
    ctx->pc = 0x2C7744u;
    SET_GPR_U32(ctx, 31, 0x2C774Cu);
    ctx->pc = 0x2C7748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7744u;
            // 0x2c7748: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1411E0u;
    if (runtime->hasFunction(0x1411E0u)) {
        auto targetFn = runtime->lookupFunction(0x1411E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C774Cu; }
        if (ctx->pc != 0x2C774Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgPerformanceMeter__Fi_0x1411e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C774Cu; }
        if (ctx->pc != 0x2C774Cu) { return; }
    }
    ctx->pc = 0x2C774Cu;
label_2c774c:
    // 0x2c774c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c774cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7750: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2c7750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2c7754: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x2C7754u;
    SET_GPR_U32(ctx, 31, 0x2C775Cu);
    ctx->pc = 0x2C7758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7754u;
            // 0x2c7758: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C775Cu; }
        if (ctx->pc != 0x2C775Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C775Cu; }
        if (ctx->pc != 0x2C775Cu) { return; }
    }
    ctx->pc = 0x2C775Cu;
label_2c775c:
    // 0x2c775c: 0xc0a6360  jal         func_298D80
    ctx->pc = 0x2C775Cu;
    SET_GPR_U32(ctx, 31, 0x2C7764u);
    ctx->pc = 0x2C7760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C775Cu;
            // 0x2c7760: 0x8f849d64  lw          $a0, -0x629C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942052)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298D80u;
    if (runtime->hasFunction(0x298D80u)) {
        auto targetFn = runtime->lookupFunction(0x298D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7764u; }
        if (ctx->pc != 0x2C7764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SwitchThread__6CMovieFv_0x298d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7764u; }
        if (ctx->pc != 0x2C7764u) { return; }
    }
    ctx->pc = 0x2C7764u;
label_2c7764:
    // 0x2c7764: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x2C7764u;
    SET_GPR_U32(ctx, 31, 0x2C776Cu);
    ctx->pc = 0x2C7768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7764u;
            // 0x2c7768: 0x27a401f0  addiu       $a0, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C776Cu; }
        if (ctx->pc != 0x2C776Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C776Cu; }
        if (ctx->pc != 0x2C776Cu) { return; }
    }
    ctx->pc = 0x2C776Cu;
label_2c776c:
    // 0x2c776c: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2c776cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x2c7770: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c7770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7774: 0xc04d104  jal         func_134410
    ctx->pc = 0x2C7774u;
    SET_GPR_U32(ctx, 31, 0x2C777Cu);
    ctx->pc = 0x2C7778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7774u;
            // 0x2c7778: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C777Cu; }
        if (ctx->pc != 0x2C777Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C777Cu; }
        if (ctx->pc != 0x2C777Cu) { return; }
    }
    ctx->pc = 0x2C777Cu;
label_2c777c:
    // 0x2c777c: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x2C777Cu;
    SET_GPR_U32(ctx, 31, 0x2C7784u);
    ctx->pc = 0x2C7780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C777Cu;
            // 0x2c7780: 0x27a401f0  addiu       $a0, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7784u; }
        if (ctx->pc != 0x2C7784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7784u; }
        if (ctx->pc != 0x2C7784u) { return; }
    }
    ctx->pc = 0x2C7784u;
label_2c7784:
    // 0x2c7784: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2c7784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x2c7788: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x2C7788u;
    SET_GPR_U32(ctx, 31, 0x2C7790u);
    ctx->pc = 0x2C778Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7788u;
            // 0x2c778c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7790u; }
        if (ctx->pc != 0x2C7790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7790u; }
        if (ctx->pc != 0x2C7790u) { return; }
    }
    ctx->pc = 0x2C7790u;
label_2c7790:
    // 0x2c7790: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2c7790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x2c7794: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x2C7794u;
    SET_GPR_U32(ctx, 31, 0x2C779Cu);
    ctx->pc = 0x2C7798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7794u;
            // 0x2c7798: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C779Cu; }
        if (ctx->pc != 0x2C779Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C779Cu; }
        if (ctx->pc != 0x2C779Cu) { return; }
    }
    ctx->pc = 0x2C779Cu;
label_2c779c:
    // 0x2c779c: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2c779cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x2c77a0: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2C77A0u;
    SET_GPR_U32(ctx, 31, 0x2C77A8u);
    ctx->pc = 0x2C77A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C77A0u;
            // 0x2c77a4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C77A8u; }
        if (ctx->pc != 0x2C77A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C77A8u; }
        if (ctx->pc != 0x2C77A8u) { return; }
    }
    ctx->pc = 0x2C77A8u;
label_2c77a8:
    // 0x2c77a8: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2c77a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x2c77ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c77acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c77b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c77b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c77b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c77b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c77b8: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2C77B8u;
    SET_GPR_U32(ctx, 31, 0x2C77C0u);
    ctx->pc = 0x2C77BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C77B8u;
            // 0x2c77bc: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C77C0u; }
        if (ctx->pc != 0x2C77C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C77C0u; }
        if (ctx->pc != 0x2C77C0u) { return; }
    }
    ctx->pc = 0x2C77C0u;
label_2c77c0:
    // 0x2c77c0: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2c77c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x2c77c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c77c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c77c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c77c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c77cc: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x2c77ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2c77d0: 0x240801a0  addiu       $t0, $zero, 0x1A0
    ctx->pc = 0x2c77d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
    // 0x2c77d4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2c77d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c77d8: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x2C77D8u;
    SET_GPR_U32(ctx, 31, 0x2C77E0u);
    ctx->pc = 0x2C77DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C77D8u;
            // 0x2c77dc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C77E0u; }
        if (ctx->pc != 0x2C77E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C77E0u; }
        if (ctx->pc != 0x2C77E0u) { return; }
    }
    ctx->pc = 0x2C77E0u;
label_2c77e0:
    // 0x2c77e0: 0x8f859d68  lw          $a1, -0x6298($gp)
    ctx->pc = 0x2c77e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942056)));
    // 0x2c77e4: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x2C77E4u;
    SET_GPR_U32(ctx, 31, 0x2C77ECu);
    ctx->pc = 0x2C77E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C77E4u;
            // 0x2c77e8: 0x27a401f0  addiu       $a0, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C77ECu; }
        if (ctx->pc != 0x2C77ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C77ECu; }
        if (ctx->pc != 0x2C77ECu) { return; }
    }
    ctx->pc = 0x2C77ECu;
label_2c77ec:
    // 0x2c77ec: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2c77ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2c77f0: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2c77f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x2c77f4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2c77f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c77f8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2c77f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c77fc: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2C77FCu;
    SET_GPR_U32(ctx, 31, 0x2C7804u);
    ctx->pc = 0x2C7800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C77FCu;
            // 0x2c7800: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7804u; }
        if (ctx->pc != 0x2C7804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7804u; }
        if (ctx->pc != 0x2C7804u) { return; }
    }
    ctx->pc = 0x2C7804u;
label_2c7804:
    // 0x2c7804: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2c7804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x2c7808: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c7808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c780c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c780cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7810: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x2c7810u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2c7814: 0x240801a0  addiu       $t0, $zero, 0x1A0
    ctx->pc = 0x2c7814u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
    // 0x2c7818: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2c7818u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c781c: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x2C781Cu;
    SET_GPR_U32(ctx, 31, 0x2C7824u);
    ctx->pc = 0x2C7820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C781Cu;
            // 0x2c7820: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7824u; }
        if (ctx->pc != 0x2C7824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7824u; }
        if (ctx->pc != 0x2C7824u) { return; }
    }
    ctx->pc = 0x2C7824u;
label_2c7824:
    // 0x2c7824: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2C7824u;
    SET_GPR_U32(ctx, 31, 0x2C782Cu);
    ctx->pc = 0x2C7828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7824u;
            // 0x2c7828: 0x27a401f0  addiu       $a0, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C782Cu; }
        if (ctx->pc != 0x2C782Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C782Cu; }
        if (ctx->pc != 0x2C782Cu) { return; }
    }
    ctx->pc = 0x2C782Cu;
label_2c782c:
    // 0x2c782c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2c782cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x2c7830: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2c7830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c7834: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2C7834u;
    SET_GPR_U32(ctx, 31, 0x2C783Cu);
    ctx->pc = 0x2C7838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7834u;
            // 0x2c7838: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C783Cu; }
        if (ctx->pc != 0x2C783Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C783Cu; }
        if (ctx->pc != 0x2C783Cu) { return; }
    }
    ctx->pc = 0x2C783Cu;
label_2c783c:
    // 0x2c783c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C783Cu;
    {
        const bool branch_taken_0x2c783c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C783Cu;
            // 0x2c7840: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c783c) {
            ctx->pc = 0x2C7880u;
            goto label_2c7880;
        }
    }
    ctx->pc = 0x2C7844u;
    // 0x2c7844: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2c7844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c7848: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2C7848u;
    SET_GPR_U32(ctx, 31, 0x2C7850u);
    ctx->pc = 0x2C784Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7848u;
            // 0x2c784c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7850u; }
        if (ctx->pc != 0x2C7850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7850u; }
        if (ctx->pc != 0x2C7850u) { return; }
    }
    ctx->pc = 0x2C7850u;
label_2c7850:
    // 0x2c7850: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2C7850u;
    {
        const bool branch_taken_0x2c7850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7850u;
            // 0x2c7854: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7850) {
            ctx->pc = 0x2C7880u;
            goto label_2c7880;
        }
    }
    ctx->pc = 0x2C7858u;
    // 0x2c7858: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2c7858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c785c: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2C785Cu;
    SET_GPR_U32(ctx, 31, 0x2C7864u);
    ctx->pc = 0x2C7860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C785Cu;
            // 0x2c7860: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7864u; }
        if (ctx->pc != 0x2C7864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7864u; }
        if (ctx->pc != 0x2C7864u) { return; }
    }
    ctx->pc = 0x2C7864u;
label_2c7864:
    // 0x2c7864: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C7864u;
    {
        const bool branch_taken_0x2c7864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7864u;
            // 0x2c7868: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7864) {
            ctx->pc = 0x2C7880u;
            goto label_2c7880;
        }
    }
    ctx->pc = 0x2C786Cu;
    // 0x2c786c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c786cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7870: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2C7870u;
    SET_GPR_U32(ctx, 31, 0x2C7878u);
    ctx->pc = 0x2C7874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7870u;
            // 0x2c7874: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7878u; }
        if (ctx->pc != 0x2C7878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7878u; }
        if (ctx->pc != 0x2C7878u) { return; }
    }
    ctx->pc = 0x2C7878u;
label_2c7878:
    // 0x2c7878: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C7878u;
    {
        const bool branch_taken_0x2c7878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7878) {
            ctx->pc = 0x2C7890u;
            goto label_2c7890;
        }
    }
    ctx->pc = 0x2C7880u;
label_2c7880:
    // 0x2c7880: 0xc05047c  jal         func_1411F0
    ctx->pc = 0x2C7880u;
    SET_GPR_U32(ctx, 31, 0x2C7888u);
    ctx->pc = 0x1411F0u;
    if (runtime->hasFunction(0x1411F0u)) {
        auto targetFn = runtime->lookupFunction(0x1411F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7888u; }
        if (ctx->pc != 0x2C7888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetPerformanceMeterFlag__Fv_0x1411f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7888u; }
        if (ctx->pc != 0x2C7888u) { return; }
    }
    ctx->pc = 0x2C7888u;
label_2c7888:
    // 0x2c7888: 0xc050478  jal         func_1411E0
    ctx->pc = 0x2C7888u;
    SET_GPR_U32(ctx, 31, 0x2C7890u);
    ctx->pc = 0x2C788Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7888u;
            // 0x2c788c: 0x38440001  xori        $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1411E0u;
    if (runtime->hasFunction(0x1411E0u)) {
        auto targetFn = runtime->lookupFunction(0x1411E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7890u; }
        if (ctx->pc != 0x2C7890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgPerformanceMeter__Fi_0x1411e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7890u; }
        if (ctx->pc != 0x2C7890u) { return; }
    }
    ctx->pc = 0x2C7890u;
label_2c7890:
    // 0x2c7890: 0xc0a63cc  jal         func_298F30
    ctx->pc = 0x2C7890u;
    SET_GPR_U32(ctx, 31, 0x2C7898u);
    ctx->pc = 0x2C7894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7890u;
            // 0x2c7894: 0x8f849d64  lw          $a0, -0x629C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942052)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298F30u;
    if (runtime->hasFunction(0x298F30u)) {
        auto targetFn = runtime->lookupFunction(0x298F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7898u; }
        if (ctx->pc != 0x2C7898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndCheck__6CMovieFv_0x298f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7898u; }
        if (ctx->pc != 0x2C7898u) { return; }
    }
    ctx->pc = 0x2C7898u;
label_2c7898:
    // 0x2c7898: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C7898u;
    {
        const bool branch_taken_0x2c7898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C789Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7898u;
            // 0x2c789c: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7898) {
            ctx->pc = 0x2C78B4u;
            goto label_2c78b4;
        }
    }
    ctx->pc = 0x2C78A0u;
    // 0x2c78a0: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x2c78a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2c78a4: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2C78A4u;
    SET_GPR_U32(ctx, 31, 0x2C78ACu);
    ctx->pc = 0x2C78A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C78A4u;
            // 0x2c78a8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C78ACu; }
        if (ctx->pc != 0x2C78ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C78ACu; }
        if (ctx->pc != 0x2C78ACu) { return; }
    }
    ctx->pc = 0x2C78ACu;
label_2c78ac:
    // 0x2c78ac: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x2C78ACu;
    {
        const bool branch_taken_0x2c78ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c78ac) {
            ctx->pc = 0x2C79CCu;
            goto label_2c79cc;
        }
    }
    ctx->pc = 0x2C78B4u;
label_2c78b4:
    // 0x2c78b4: 0xc0a6378  jal         func_298DE0
    ctx->pc = 0x2C78B4u;
    SET_GPR_U32(ctx, 31, 0x2C78BCu);
    ctx->pc = 0x2C78B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C78B4u;
            // 0x2c78b8: 0x8f849d64  lw          $a0, -0x629C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942052)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298DE0u;
    if (runtime->hasFunction(0x298DE0u)) {
        auto targetFn = runtime->lookupFunction(0x298DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C78BCu; }
        if (ctx->pc != 0x2C78BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Term__6CMovieFv_0x298de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C78BCu; }
        if (ctx->pc != 0x2C78BCu) { return; }
    }
    ctx->pc = 0x2C78BCu;
label_2c78bc:
    // 0x2c78bc: 0xc0a6360  jal         func_298D80
    ctx->pc = 0x2C78BCu;
    SET_GPR_U32(ctx, 31, 0x2C78C4u);
    ctx->pc = 0x2C78C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C78BCu;
            // 0x2c78c0: 0x8f849d64  lw          $a0, -0x629C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942052)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298D80u;
    if (runtime->hasFunction(0x298D80u)) {
        auto targetFn = runtime->lookupFunction(0x298D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C78C4u; }
        if (ctx->pc != 0x2C78C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SwitchThread__6CMovieFv_0x298d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C78C4u; }
        if (ctx->pc != 0x2C78C4u) { return; }
    }
    ctx->pc = 0x2C78C4u;
label_2c78c4:
    // 0x2c78c4: 0x8f849d60  lw          $a0, -0x62A0($gp)
    ctx->pc = 0x2c78c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942048)));
    // 0x2c78c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c78c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c78cc: 0xc0a98a0  jal         func_2A6280
    ctx->pc = 0x2C78CCu;
    SET_GPR_U32(ctx, 31, 0x2C78D4u);
    ctx->pc = 0x2C78D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C78CCu;
            // 0x2c78d0: 0xaf809d90  sw          $zero, -0x6270($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942096), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6280u;
    if (runtime->hasFunction(0x2A6280u)) {
        auto targetFn = runtime->lookupFunction(0x2A6280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C78D4u; }
        if (ctx->pc != 0x2C78D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopBGM__6CSceneFi_0x2a6280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C78D4u; }
        if (ctx->pc != 0x2C78D4u) { return; }
    }
    ctx->pc = 0x2C78D4u;
label_2c78d4:
    // 0x2c78d4: 0x87839d84  lh          $v1, -0x627C($gp)
    ctx->pc = 0x2c78d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294942084)));
    // 0x2c78d8: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2c78d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2c78dc: 0xac20d354  sw          $zero, -0x2CAC($at)
    ctx->pc = 0x2c78dcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294955860), GPR_U32(ctx, 0));
    // 0x2c78e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c78e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c78e4: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2c78e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2c78e8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C78E8u;
    {
        const bool branch_taken_0x2c78e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C78ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C78E8u;
            // 0x2c78ec: 0xac20d34c  sw          $zero, -0x2CB4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294955852), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c78e8) {
            ctx->pc = 0x2C78FCu;
            goto label_2c78fc;
        }
    }
    ctx->pc = 0x2C78F0u;
    // 0x2c78f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c78f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c78f4: 0x14620033  bne         $v1, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2C78F4u;
    {
        const bool branch_taken_0x2c78f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C78F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C78F4u;
            // 0x2c78f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c78f4) {
            ctx->pc = 0x2C79C4u;
            goto label_2c79c4;
        }
    }
    ctx->pc = 0x2C78FCu;
label_2c78fc:
    // 0x2c78fc: 0x87829d88  lh          $v0, -0x6278($gp)
    ctx->pc = 0x2c78fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294942088)));
    // 0x2c7900: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c7900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c7904: 0xa7829d88  sh          $v0, -0x6278($gp)
    ctx->pc = 0x2c7904u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294942088), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c7908: 0x87869d88  lh          $a2, -0x6278($gp)
    ctx->pc = 0x2c7908u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294942088)));
    // 0x2c790c: 0x28c10004  slti        $at, $a2, 0x4
    ctx->pc = 0x2c790cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2c7910: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
    ctx->pc = 0x2C7910u;
    {
        const bool branch_taken_0x2c7910 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7910u;
            // 0x2c7914: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7910) {
            ctx->pc = 0x2C79B8u;
            goto label_2c79b8;
        }
    }
    ctx->pc = 0x2C7918u;
    // 0x2c7918: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C7918u;
    {
        const bool branch_taken_0x2c7918 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C791Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7918u;
            // 0x2c791c: 0xaf829d90  sw          $v0, -0x6270($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942096), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7918) {
            ctx->pc = 0x2C7930u;
            goto label_2c7930;
        }
    }
    ctx->pc = 0x2C7920u;
    // 0x2c7920: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c7920u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c7924: 0x27a40310  addiu       $a0, $sp, 0x310
    ctx->pc = 0x2c7924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x2c7928: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2C7928u;
    SET_GPR_U32(ctx, 31, 0x2C7930u);
    ctx->pc = 0x2C792Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7928u;
            // 0x2c792c: 0x24a5ff98  addiu       $a1, $a1, -0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7930u; }
        if (ctx->pc != 0x2C7930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7930u; }
        if (ctx->pc != 0x2C7930u) { return; }
    }
    ctx->pc = 0x2C7930u;
label_2c7930:
    // 0x2c7930: 0x87839d84  lh          $v1, -0x627C($gp)
    ctx->pc = 0x2c7930u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294942084)));
    // 0x2c7934: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c7934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c7938: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C7938u;
    {
        const bool branch_taken_0x2c7938 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c7938) {
            ctx->pc = 0x2C7954u;
            goto label_2c7954;
        }
    }
    ctx->pc = 0x2C7940u;
    // 0x2c7940: 0x87869d88  lh          $a2, -0x6278($gp)
    ctx->pc = 0x2c7940u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294942088)));
    // 0x2c7944: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c7944u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c7948: 0x27a40310  addiu       $a0, $sp, 0x310
    ctx->pc = 0x2c7948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x2c794c: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2C794Cu;
    SET_GPR_U32(ctx, 31, 0x2C7954u);
    ctx->pc = 0x2C7950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C794Cu;
            // 0x2c7950: 0x24a5ffa8  addiu       $a1, $a1, -0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7954u; }
        if (ctx->pc != 0x2C7954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7954u; }
        if (ctx->pc != 0x2C7954u) { return; }
    }
    ctx->pc = 0x2C7954u;
label_2c7954:
    // 0x2c7954: 0x8f849d64  lw          $a0, -0x629C($gp)
    ctx->pc = 0x2c7954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942052)));
    // 0x2c7958: 0x3c0601f1  lui         $a2, 0x1F1
    ctx->pc = 0x2c7958u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)497 << 16));
    // 0x2c795c: 0x27a50310  addiu       $a1, $sp, 0x310
    ctx->pc = 0x2c795cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x2c7960: 0x24c6d330  addiu       $a2, $a2, -0x2CD0
    ctx->pc = 0x2c7960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955824));
    // 0x2c7964: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x2c7964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2c7968: 0x240801a0  addiu       $t0, $zero, 0x1A0
    ctx->pc = 0x2c7968u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
    // 0x2c796c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2c796cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7970: 0xc0a62b4  jal         func_298AD0
    ctx->pc = 0x2C7970u;
    SET_GPR_U32(ctx, 31, 0x2C7978u);
    ctx->pc = 0x2C7974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7970u;
            // 0x2c7974: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298AD0u;
    if (runtime->hasFunction(0x298AD0u)) {
        auto targetFn = runtime->lookupFunction(0x298AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7978u; }
        if (ctx->pc != 0x2C7978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Load__6CMovieFPcP9mgCMemoryiibb_0x298ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7978u; }
        if (ctx->pc != 0x2C7978u) { return; }
    }
    ctx->pc = 0x2C7978u;
label_2c7978:
    // 0x2c7978: 0x8f849d64  lw          $a0, -0x629C($gp)
    ctx->pc = 0x2c7978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942052)));
    // 0x2c797c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c797cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c7980: 0xc0a62e0  jal         func_298B80
    ctx->pc = 0x2C7980u;
    SET_GPR_U32(ctx, 31, 0x2C7988u);
    ctx->pc = 0x2C7984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7980u;
            // 0x2c7984: 0x24a5ff20  addiu       $a1, $a1, -0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298B80u;
    if (runtime->hasFunction(0x298B80u)) {
        auto targetFn = runtime->lookupFunction(0x298B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7988u; }
        if (ctx->pc != 0x2C7988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Play__6CMovieFPc_0x298b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7988u; }
        if (ctx->pc != 0x2C7988u) { return; }
    }
    ctx->pc = 0x2C7988u;
label_2c7988:
    // 0x2c7988: 0xc0a6360  jal         func_298D80
    ctx->pc = 0x2C7988u;
    SET_GPR_U32(ctx, 31, 0x2C7990u);
    ctx->pc = 0x2C798Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7988u;
            // 0x2c798c: 0x8f849d64  lw          $a0, -0x629C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942052)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298D80u;
    if (runtime->hasFunction(0x298D80u)) {
        auto targetFn = runtime->lookupFunction(0x298D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7990u; }
        if (ctx->pc != 0x2C7990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SwitchThread__6CMovieFv_0x298d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7990u; }
        if (ctx->pc != 0x2C7990u) { return; }
    }
    ctx->pc = 0x2C7990u;
label_2c7990:
    // 0x2c7990: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C7990u;
    {
        const bool branch_taken_0x2c7990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7990) {
            ctx->pc = 0x2C79A0u;
            goto label_2c79a0;
        }
    }
    ctx->pc = 0x2C7998u;
label_2c7998:
    // 0x2c7998: 0xc0a6360  jal         func_298D80
    ctx->pc = 0x2C7998u;
    SET_GPR_U32(ctx, 31, 0x2C79A0u);
    ctx->pc = 0x2C799Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7998u;
            // 0x2c799c: 0x8f849d64  lw          $a0, -0x629C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942052)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298D80u;
    if (runtime->hasFunction(0x298D80u)) {
        auto targetFn = runtime->lookupFunction(0x298D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C79A0u; }
        if (ctx->pc != 0x2C79A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SwitchThread__6CMovieFv_0x298d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C79A0u; }
        if (ctx->pc != 0x2C79A0u) { return; }
    }
    ctx->pc = 0x2C79A0u;
label_2c79a0:
    // 0x2c79a0: 0xc0a63dc  jal         func_298F70
    ctx->pc = 0x2C79A0u;
    SET_GPR_U32(ctx, 31, 0x2C79A8u);
    ctx->pc = 0x2C79A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C79A0u;
            // 0x2c79a4: 0x8f849d64  lw          $a0, -0x629C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942052)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298F70u;
    if (runtime->hasFunction(0x298F70u)) {
        auto targetFn = runtime->lookupFunction(0x298F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C79A8u; }
        if (ctx->pc != 0x2C79A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsStarted__6CMovieFv_0x298f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C79A8u; }
        if (ctx->pc != 0x2C79A8u) { return; }
    }
    ctx->pc = 0x2C79A8u;
label_2c79a8:
    // 0x2c79a8: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2C79A8u;
    {
        const bool branch_taken_0x2c79a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c79a8) {
            ctx->pc = 0x2C7998u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c7998;
        }
    }
    ctx->pc = 0x2C79B0u;
    // 0x2c79b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C79B0u;
    {
        const bool branch_taken_0x2c79b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c79b0) {
            ctx->pc = 0x2C79C0u;
            goto label_2c79c0;
        }
    }
    ctx->pc = 0x2C79B8u;
label_2c79b8:
    // 0x2c79b8: 0xa7809d88  sh          $zero, -0x6278($gp)
    ctx->pc = 0x2c79b8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294942088), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c79bc: 0xa7809d84  sh          $zero, -0x627C($gp)
    ctx->pc = 0x2c79bcu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294942084), (uint16_t)GPR_U32(ctx, 0));
label_2c79c0:
    // 0x2c79c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c79c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c79c4:
    // 0x2c79c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C79C4u;
    {
        const bool branch_taken_0x2c79c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c79c4) {
            ctx->pc = 0x2C79D0u;
            goto label_2c79d0;
        }
    }
    ctx->pc = 0x2C79CCu;
label_2c79cc:
    // 0x2c79cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c79ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c79d0:
    // 0x2c79d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c79d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2c79d4:
    // 0x2c79d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c79d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c79d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c79d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c79dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c79dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c79e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C79E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C79E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C79E0u;
            // 0x2c79e4: 0x27bd0350  addiu       $sp, $sp, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C79E8u;
}
