#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: BeginDraw__14mgCDrawManagerFP9mgCMemoryPi
// Address: 0x135230 - 0x135464
void BeginDraw__14mgCDrawManagerFP9mgCMemoryPi_0x135230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BeginDraw__14mgCDrawManagerFP9mgCMemoryPi_0x135230");
#endif

    switch (ctx->pc) {
        case 0x1352ccu: goto label_1352cc;
        case 0x1352dcu: goto label_1352dc;
        case 0x135318u: goto label_135318;
        case 0x13535cu: goto label_13535c;
        case 0x13536cu: goto label_13536c;
        case 0x1353fcu: goto label_1353fc;
        case 0x135410u: goto label_135410;
        case 0x135424u: goto label_135424;
        case 0x135438u: goto label_135438;
        case 0x135448u: goto label_135448;
        default: break;
    }

    ctx->pc = 0x135230u;

    // 0x135230: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x135230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x135234: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x135234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x135238: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x135238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13523c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13523cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x135240: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x135240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x135244: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x135244u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135248: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x135248u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13524c: 0xac850054  sw          $a1, 0x54($a0)
    ctx->pc = 0x13524cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 5));
    // 0x135250: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x135250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x135254: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x135254u;
    {
        const bool branch_taken_0x135254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x135254) {
            ctx->pc = 0x135264u;
            goto label_135264;
        }
    }
    ctx->pc = 0x13525Cu;
    // 0x13525c: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x13525cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x135260: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x135260u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
label_135264:
    // 0x135264: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x135264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x135268: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x135268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x13526c: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x13526cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x135270: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x135270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x135274: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x135274u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x135278: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x135278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x13527c: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x13527cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x135280: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x135280u;
    {
        const bool branch_taken_0x135280 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x135280) {
            ctx->pc = 0x135290u;
            goto label_135290;
        }
    }
    ctx->pc = 0x135288u;
    // 0x135288: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x135288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x13528c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x13528cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_135290:
    // 0x135290: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x135290u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x135294: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x135294u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x135298: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x135298u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x13529c: 0x12200053  beqz        $s1, . + 4 + (0x53 << 2)
    ctx->pc = 0x13529Cu;
    {
        const bool branch_taken_0x13529c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x13529c) {
            ctx->pc = 0x1353ECu;
            goto label_1353ec;
        }
    }
    ctx->pc = 0x1352A4u;
    // 0x1352a4: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1352a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1352a8: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x1352a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1352ac: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1352ACu;
    {
        const bool branch_taken_0x1352ac = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1352ac) {
            ctx->pc = 0x1352BCu;
            goto label_1352bc;
        }
    }
    ctx->pc = 0x1352B4u;
    // 0x1352b4: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1352b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1352b8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1352b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1352bc:
    // 0x1352bc: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x1352bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1352c0: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x1352c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1352c4: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1352C4u;
    SET_GPR_U32(ctx, 31, 0x1352CCu);
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1352CCu; }
        if (ctx->pc != 0x1352CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1352CCu; }
        if (ctx->pc != 0x1352CCu) { return; }
    }
    ctx->pc = 0x1352CCu;
label_1352cc:
    // 0x1352cc: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1352ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x1352d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1352d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1352d4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1352D4u;
    {
        const bool branch_taken_0x1352d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1352d4) {
            ctx->pc = 0x1352F4u;
            goto label_1352f4;
        }
    }
    ctx->pc = 0x1352DCu;
label_1352dc:
    // 0x1352dc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1352dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1352e0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1352e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1352e4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1352e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1352e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1352e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1352ec: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1352ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1352f0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1352f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1352f4:
    // 0x1352f4: 0x0  nop
    ctx->pc = 0x1352f4u;
    // NOP
    // 0x1352f8: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1352f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1352fc: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1352fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x135300: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x135300u;
    {
        const bool branch_taken_0x135300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x135300) {
            ctx->pc = 0x1352DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1352dc;
        }
    }
    ctx->pc = 0x135308u;
    // 0x135308: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x135308u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13530c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x13530cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135310: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x135310u;
    {
        const bool branch_taken_0x135310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135310) {
            ctx->pc = 0x135320u;
            goto label_135320;
        }
    }
    ctx->pc = 0x135318u;
label_135318:
    // 0x135318: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x135318u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x13531c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x13531cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_135320:
    // 0x135320: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x135320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x135324: 0x0  nop
    ctx->pc = 0x135324u;
    // NOP
    // 0x135328: 0x0  nop
    ctx->pc = 0x135328u;
    // NOP
    // 0x13532c: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13532Cu;
    {
        const bool branch_taken_0x13532c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x13532c) {
            ctx->pc = 0x135318u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_135318;
        }
    }
    ctx->pc = 0x135334u;
    // 0x135334: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x135334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x135338: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x135338u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x13533c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13533Cu;
    {
        const bool branch_taken_0x13533c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x13533c) {
            ctx->pc = 0x13534Cu;
            goto label_13534c;
        }
    }
    ctx->pc = 0x135344u;
    // 0x135344: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x135344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x135348: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x135348u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_13534c:
    // 0x13534c: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x13534cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x135350: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x135350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x135354: 0xc04e748  jal         func_139D20
    ctx->pc = 0x135354u;
    SET_GPR_U32(ctx, 31, 0x13535Cu);
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13535Cu; }
        if (ctx->pc != 0x13535Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13535Cu; }
        if (ctx->pc != 0x13535Cu) { return; }
    }
    ctx->pc = 0x13535Cu;
label_13535c:
    // 0x13535c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x13535cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x135360: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x135360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135364: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x135364u;
    {
        const bool branch_taken_0x135364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135364) {
            ctx->pc = 0x1353A4u;
            goto label_1353a4;
        }
    }
    ctx->pc = 0x13536Cu;
label_13536c:
    // 0x13536c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x13536cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x135370: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x135370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x135374: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x135374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x135378: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x135378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13537c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x13537cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x135380: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x135380u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x135384: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x135384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x135388: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x135388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13538c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13538cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x135390: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x135390u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x135394: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x135394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x135398: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x135398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13539c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x13539cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x1353a0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1353a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1353a4:
    // 0x1353a4: 0x0  nop
    ctx->pc = 0x1353a4u;
    // NOP
    // 0x1353a8: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x1353a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1353ac: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1353ACu;
    {
        const bool branch_taken_0x1353ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1353ac) {
            ctx->pc = 0x13536Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13536c;
        }
    }
    ctx->pc = 0x1353B4u;
    // 0x1353b4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1353b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1353b8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1353b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1353bc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1353bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1353c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1353c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1353c4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1353c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1353c8: 0xae50000c  sw          $s0, 0xC($s2)
    ctx->pc = 0x1353c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 16));
    // 0x1353cc: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1353ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1353d0: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1353d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1353d4: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x1353d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1353d8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1353D8u;
    {
        const bool branch_taken_0x1353d8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1353d8) {
            ctx->pc = 0x1353E8u;
            goto label_1353e8;
        }
    }
    ctx->pc = 0x1353E0u;
    // 0x1353e0: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1353e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1353e4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1353e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1353e8:
    // 0x1353e8: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x1353e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1353ec:
    // 0x1353ec: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x1353ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1353f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1353f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1353f4: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1353F4u;
    SET_GPR_U32(ctx, 31, 0x1353FCu);
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1353FCu; }
        if (ctx->pc != 0x1353FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1353FCu; }
        if (ctx->pc != 0x1353FCu) { return; }
    }
    ctx->pc = 0x1353FCu;
label_1353fc:
    // 0x1353fc: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x1353fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x135400: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x135400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x135404: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x135404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135408: 0xc04e748  jal         func_139D20
    ctx->pc = 0x135408u;
    SET_GPR_U32(ctx, 31, 0x135410u);
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135410u; }
        if (ctx->pc != 0x135410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135410u; }
        if (ctx->pc != 0x135410u) { return; }
    }
    ctx->pc = 0x135410u;
label_135410:
    // 0x135410: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x135410u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    // 0x135414: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x135414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x135418: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x135418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13541c: 0xc04e748  jal         func_139D20
    ctx->pc = 0x13541Cu;
    SET_GPR_U32(ctx, 31, 0x135424u);
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135424u; }
        if (ctx->pc != 0x135424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135424u; }
        if (ctx->pc != 0x135424u) { return; }
    }
    ctx->pc = 0x135424u;
label_135424:
    // 0x135424: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x135424u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
    // 0x135428: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x135428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x13542c: 0x8e45001c  lw          $a1, 0x1C($s2)
    ctx->pc = 0x13542cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x135430: 0xc04e748  jal         func_139D20
    ctx->pc = 0x135430u;
    SET_GPR_U32(ctx, 31, 0x135438u);
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135438u; }
        if (ctx->pc != 0x135438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135438u; }
        if (ctx->pc != 0x135438u) { return; }
    }
    ctx->pc = 0x135438u;
label_135438:
    // 0x135438: 0xae420050  sw          $v0, 0x50($s2)
    ctx->pc = 0x135438u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
    // 0x13543c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13543cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135440: 0xc04d51c  jal         func_135470
    ctx->pc = 0x135440u;
    SET_GPR_U32(ctx, 31, 0x135448u);
    ctx->pc = 0x135470u;
    if (runtime->hasFunction(0x135470u)) {
        auto targetFn = runtime->lookupFunction(0x135470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135448u; }
        if (ctx->pc != 0x135448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ClearTable__14mgCDrawManagerFv_0x135470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135448u; }
        if (ctx->pc != 0x135448u) { return; }
    }
    ctx->pc = 0x135448u;
label_135448:
    // 0x135448: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x135448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13544c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13544cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135450: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x135450u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135454: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x135454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135458: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x135458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13545c: 0x3e00008  jr          $ra
    ctx->pc = 0x13545Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x135464u;
}
